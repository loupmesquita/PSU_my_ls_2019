/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls
*/

#include "../includes/phoenix.h"

int ls(char *av)
{
    int i = 0;
    struct dirent *reading;
    DIR *rep;
    rep = opendir(av);
    if (rep == NULL)
    exit (84);
    while ((reading = readdir(rep))) {
        if (reading->d_name[0] != '.'){
        my_strlen(reading->d_name);
        show_string(reading->d_name);
        show_string("\n");
        i++;
        }
    }
    closedir(rep);
}

int lsd(char *av)
{
    int i = 0;
    struct dirent *reading;
    DIR *rep;
    rep = opendir(av);
    if (rep == NULL)
    exit (84);
    while ((reading = readdir(rep))) {
        if (reading->d_name[0] == '.' && reading->d_name[1] == '\0'){
        my_strlen(reading->d_name);
        show_string(reading->d_name);
        if (reading->d_name[i] != '\0')
            show_string(" ");
        }
        i++;
    }
    closedir(rep);
}

int mein(int ac, char **av)
{
    if ((av[1][0] == '-')){
        if (av[1][1] == 'a')
            lsa(".");
        if (av[1][1] == '1')
            ls2(".");
        if (av[1][1] == 'l')
            lsl(".");
        if (av[1][1] == 'd')
            lsd(".");
        if (av[1][1] == 't')
        lst(".");
        if ((av[1][1] == '\0'))
        return 1;
        }
    else {ls(av[1]);
    return 0;}
}

int moon(int ac, char **av)
{
    if ((av[1][0] == '-')){
        if (av[1][1] == 'a')
            lsa(av[2]);
        if (av[1][1] == '1')
            ls2(av[2]);
        if (av[1][1] == 'l')
            lsl(av[2]);
        if (av[1][1] == 'd')
            lsd(av[2]);
        if (av[1][1] == 't')
        lst(av[2]);
        if ((av[1][1] == '\0'))
        return 1;
        }
    else {
    return 0;}
}

int main(int ac, char **av)
{
    if (ac == 2){
        mein(ac, av);
    }
    if (ac == 3){
        moon(ac, av);
        return 0;
    }
    if (ac == 1)
    ls(".");
    return 0;
}