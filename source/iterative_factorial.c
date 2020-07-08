/*
** EPITECH PROJECT, 2019
** iterative
** File description:
** iterative
*/

#include "../includes/phoenix.h"

int iterative_factorial(int nb)
{
    int resultat = nb;
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12){
        return (0);}
    for (int i = 1; i < nb; i = i +1){
        resultat = resultat * (nb-i);
    }
    return (resultat);
}
