/*
** EPITECH PROJECT, 2019
** show_combinations
** File description:
** show_combinations
*/

#include "../includes/phoenix.h"

void    combinations(int x, int y, int z)
{
    if (x == 55 && y == 56 && z == 57)
    {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
    }
    else
    {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
        my_putstr(", ");
    }
}

int     show_combinations(void)
{
    char  x;
    char  y;
    char  z;

    x = 48;
    while (x < 56)
    {
        y = x + 1;
        while (y < 57)
        {
            z = y + 1;
            while (z < 58)
            {
                combinations(x, y, z);
                z -= -1;
            }
            y -= -1;
        }
        x -= -1;
    }
}
