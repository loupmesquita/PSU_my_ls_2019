/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** my_strcpy
*/

#include "../includes/phoenix.h"

char *my_strcpy(char *dest, char const *src)
{
    int n = 0;

    while (src[n])
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return (dest);
}
