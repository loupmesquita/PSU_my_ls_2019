/*
** EPITECH PROJECT, 2019
** prime
** File description:
** prime
*/

#include "../includes/phoenix.h"

int is_prime_number(int nb)
{
    int a = 0;
    int z = 0;

    if (nb > 2147483647 || nb < -2147483647)
        return (0);

    for (a = 1; a <= nb; a++) {
        if (nb % a == 0) {
            z++;
        }
    }
    if (z == 2) {
        return (1);
    }
    else {
        return (0);
    }
}
