/*
** EPITECH PROJECT, 2019
** pointeur
** File description:
** pointeur
*/

#include "../includes/phoenix.h"

void myprintp(long int nb, char str)
{
    my_putchar('0');
    my_putchar('x');
    my_put_nbrhexmin2(nb, str);
}

void    my_put_nbrhexmin2(long int nb, char str)
{
    long int number = nb;

    char string[] = "0123456789abcdef";

    if (number >= 16){
        my_put_nbrhexmin(number / 16, str);
        my_putchar(string[number % 16]);

    }
    else {
        my_putchar(string[number]);
    }
}

void    my_put_nbrhexmin(long int nb, char str)
{
    long int number = nb;

    char string[] = "0123456789abcdef";

    if (number >= 16){
        my_put_nbrhexmin(number / 16, str);
        my_putchar(string[number % 16]);

    }
    else {
        my_putchar(string[number]);
    }
}
