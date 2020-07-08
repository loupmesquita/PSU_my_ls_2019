/*
** EPITECH PROJECT, 2020
** lsl
** File description:
** lsl
*/

#include "../includes/phoenix.h"

int lsl(char *av)
{
    int blc = 0;
    DIR *rep = opendir (av);
    if (rep == NULL)
    exit (84);
        bientotlafin(av);
        struct dirent *reading;
        while ((reading = readdir (rep)))
        {
            print_all(av, reading, blc);
        }
        closedir (rep), rep = NULL;
    return 0;
}

int print_all(char *av, struct dirent *reading, int blc)
{
    struct stat st;
    struct group gr;
    uid_t uid;
    blkcnt_t w;
    stat (mem_alloc(av, reading->d_name), &st);
    {
        if (reading->d_name[0] != '.'){
            time_t t = st.st_mtime;
            __off_t s = st.st_size;
            mode_t h = st.st_mode;
            nlink_t b = st.st_nlink;
            w = st.st_blocks/2;
            blc = blc + w;
            struct passwd *pw = getpwuid(st.st_uid);
            struct group  *gr = getgrgid(st.st_gid);
            char *tm = ctime (&t);
            print_sd(st, b, pw, gr);
            my_printf(" %d %s %s\n", s, timedatho(tm), reading->d_name);
        }
    }
}

char *timedatho(char *str)
{
    int k = 0;
    int c = 0;
    for (int i = 0 ; str[i] != '\0'; i++){
    if (str[i] > 47 && str[i] < 58)
    k++;
    if (i == 0){
    str[i] = ' ';
    str[i + 1] = ' ';
    str[i + 2] = ' ';
    }
    if (k == 6)
    str[i +1] = '\0';
    }
    char *sto = malloc(13);
    for (int j = 4 ; str[j] != '\0' ; j++){
        sto[c] = str[j];
        c++;
    }
    sto[c] = '\0';
    return sto;
}

char *timebiche(char *str)
{
    int m = 3;
    char *sta = malloc(13);
    sta[0] = str[4];
    sta[1] = str[5];
    sta[2] = ' ';
    for (int n = 0 ; str[n] != sta[0] ; n++){
        {
        sta[m] = str[n];
        }
        m++;
    }
    for (int p = 7 ; str[p] != '\0' ; p++) {
    sta[m] = str[p];
    m++;
    }
    sta[m] = '\0';
    return sta;
}

int pr(struct stat st)
{
    my_printf((S_ISDIR(st.st_mode)) ? "d" : "-");
    my_printf((st.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((st.st_mode & S_IWUSR) ? "w" : "-");
    my_printf((st.st_mode & S_IXUSR) ? "x" : "-");
    my_printf((st.st_mode & S_IRGRP) ? "r" : "-");
    my_printf((st.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((st.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((st.st_mode & S_IROTH) ? "r" : "-");
    my_printf((st.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((st.st_mode & S_IXOTH) ? "x" : "-");
    my_printf(". ");
}
