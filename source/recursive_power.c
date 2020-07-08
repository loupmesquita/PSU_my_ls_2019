/*
** EPITECH PROJECT, 2019
** compute
** File description:
** compute
*/

#include "../includes/phoenix.h"

int recursive_power(int nb, int p)
{
    int i = 0;

    if (p == 0)
        return (1);

    if  (nb >= 1) {
        if (i < nb){
            return (nb *(recursive_power(nb, p-1)));
        }
    }

    if (nb == 0){
        return (1);
    }
    if (nb < 0){
        if (i > nb){
            return (nb *(recursive_power(nb, p-1)));
        }
    }
}
