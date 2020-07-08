/*
** EPITECH PROJECT, 2020
** ls1
** File description:
** ls1
*/

#include "../includes/phoenix.h"

int ls1(char *av)
{
    struct dirent *reading;
    DIR *rep;
    rep = opendir(av);
    if (rep == NULL)
    exit (1);
    while ((reading = readdir(rep))) {
        show_string(reading->d_name);
        show_string(" \n");
    }
    closedir(rep);
}

int ls2(char *av)
{
    struct dirent *reading;
    DIR *rep;
    rep = opendir(av);
    if (rep == NULL)
    exit (1);
    while ((reading = readdir(rep))) {
        if (reading->d_name[0] != '.'){
        my_strlen(reading->d_name);
        show_string(reading->d_name);
        show_string(" \n");
        }
    }
    closedir(rep);
}