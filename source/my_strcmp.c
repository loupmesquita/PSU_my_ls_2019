/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

#include "../includes/phoenix.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

int my_strcmp(char const *s1, char const *s2)
{
    my_strlen(s1);
    int ss1 = my_strlen(s1);
    my_strlen(s2);
    int ss2 = my_strlen(s2);
    int n;

    if (ss1 < ss2){
        return (-1);
    } else if (ss1 == ss2){
        return (0);
    } else (ss1 > ss2);{
        return (1);
    }
}
