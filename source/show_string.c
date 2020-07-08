/*
** EPITECH PROJECT, 2019
** show_string
** File description:
** show_string
*/

#include "../includes/phoenix.h"

int show_string(char const *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        my_putchar(str[n]);
        n = n + 1;
    }
}
