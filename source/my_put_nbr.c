/*
** EPITECH PROJECT, 2019
** putnbr
** File description:
** putnbr
*/

#include "../includes/phoenix.h"

int    my_put_nbr(int nb)
{
    int number = nb;

    if (number < 0)
    {
        my_putchar('-');
        number = number * -1;
    }
    if (number >= 10){
        my_put_nbr(number / 10);
        my_putchar(number % 10 + '0');
    }
    else {
    my_putchar(number + '0');
    }
    return (0);
}
