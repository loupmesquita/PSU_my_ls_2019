/*
** EPITECH PROJECT, 2020
** lsa
** File description:
** lsa
*/

#include "../includes/phoenix.h"

int lsa(char *av)
{
    struct dirent *reading;
    DIR *rep;
    rep = opendir(av);
    if (rep == NULL)
    return 84;
    while ((reading = readdir(rep))) {
        show_string(reading->d_name);
        show_string(" ");
    }
    closedir(rep);
}

int lst(char *av)
{
    DIR *rep = opendir (av);
    if (rep != NULL)
    {
        struct dirent *reading;
        while ((reading = readdir (rep)))
        {
            struct stat st;
            stat (reading->d_name, &st);
            {
                time_t t = st.st_mtime;
                char *tm = ctime (&t);
                show_string(tm);
                show_string("\n");
            }
        }
        closedir (rep);
    }
    return 0;
}

int bientotlafin(char *av)
{
    int blc = 0;
    DIR *rep = opendir (av);
    if (rep == NULL)
    return 84;
        struct dirent *reading;
        while ((reading = readdir (rep)))
        {
            struct stat st;
            blkcnt_t w;
            stat (mem_alloc(av, reading->d_name), &st);
            {
                if (reading->d_name[0] != '.'){
                w = st.st_blocks/2;
                blc = blc + w;
                }
            }
        }
        closedir (rep);
    my_printf("total %d\n", blc);
    return 0;
}

int print_sd(struct stat st, int b, struct passwd *pw, struct group *gr)
{
    pr(st);
    my_printf("%d %s %s", b, pw->pw_name, gr->gr_name);
}