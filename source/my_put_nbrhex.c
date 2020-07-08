/*
** EPITECH PROJECT, 2019
** putnbrhex
** File description:
** putnbrhex
*/

#include "../includes/phoenix.h"

void    my_put_nbrhex(unsigned int nb, char str)
{
    unsigned int number = nb;

    char string[] = "0123456789abcdef", string2[] = "0123456789ABCDEF";

    if (number >= 16){
        if (str == 'x'){
        my_put_nbrhex(number / 16, str);
        my_putchar(string[number % 16]);
        }
        if (str == 'X'){
        my_put_nbrhex(number / 16, str);
        my_putchar(string2[number % 16]);
        }
    }
    else {
        if (str == 'x')
        my_putchar(string[number]);
        if (str == 'X')
        my_putchar(string2[number]);
    }
}
