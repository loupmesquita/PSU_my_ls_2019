/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** putstr
*/

#include "../includes/phoenix.h"

void my_putstr(char const *str)
{
    int   n = 0;

    while (str[n] != '\0')
    {
        my_putchar(str[n]);
        n -= -1;
    }
}
