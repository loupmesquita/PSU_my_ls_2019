/*
** EPITECH PROJECT, 2019
** to_number
** File description:
** to_number
*/

#include "../includes/phoenix.h"

int to_number(char const *str)
{
    int    n = 0;
    int    o = 1;
    int    number = 0;

    while (str[n] != '\0' && (str[n] == 43 || str[n] == 45))
    {
        if (str[n] == 45)
        {
            o = ((o)*(-1));
        }
        n++;
    }
    while (str[n] >= 48 && str[n] <= 57)
    {
        number = ((number)*(10)) + str[n] - '0';
        n++;
    }
    if (number < -32767 || number > 32767)
        return (0);
    return ((number)*(o));
}
