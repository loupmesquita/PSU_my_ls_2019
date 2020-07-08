/*
** EPITECH PROJECT, 2019
** putnbrbin
** File description:
** putnbrbin
*/

#include "../includes/phoenix.h"

unsigned int    my_put_nbrbin(unsigned int nb)
{
    unsigned int number = nb;

    if (number < 0)
    {
        my_putchar('-');
        number = number * -1;
    }
    if (number >= 2){
        my_put_nbrbin(number / 2);
        my_putchar(number % 2 + '0');
    }
    else {
    my_putchar(number + '0');
    }
    return (0);
}
