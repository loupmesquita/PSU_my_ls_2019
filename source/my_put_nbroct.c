/*
** EPITECH PROJECT, 2019
** putnbroct
** File description:
** putnbroct
*/

#include "../includes/phoenix.h"

unsigned int    my_put_nbroct(unsigned int nb)
{
    unsigned int number = nb;

    if (number < 0)
    {
        my_putchar('-');
        number = number * -1;
    }
    if (number >= 8){
        my_put_nbroct(number / 8);
        my_putchar(number % 8 + '0');
    }
    else {
    my_putchar(number + '0');
    }
    return (0);
}
