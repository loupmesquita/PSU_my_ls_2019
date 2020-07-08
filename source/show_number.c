/*
** EPITECH PROJECT, 2019
** show_number
** File description:
** show_number
*/

#include "../includes/phoenix.h"

int    show_number(int nb)
{
    int number = nb;

    if (number < 0)
    {
        my_putchar('-');
        number = number * -1;
    }
    if (number >= 10){
        show_number(number / 10);
        my_putchar(number % 10 + '0');
    }
    else {
    my_putchar(number + '0');
    }
    return (0);
}