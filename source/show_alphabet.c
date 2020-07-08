/*
** EPITECH PROJECT, 2019
** show_alphabet
** File description:
** show_alphabet
*/

#include "../includes/phoenix.h"

int show_alphabet(void)
{
    char m;

    m = 96;
    while (m < 122) {
        m -= -1;
        my_putchar(m);
    }
    return (0);
}
