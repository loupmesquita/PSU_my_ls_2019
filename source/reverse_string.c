/*
** EPITECH PROJECT, 2019
** reverse
** File description:
** reverse
*/

#include "../includes/phoenix.h"

char *reverse_string(char *str)
{
    int begin = 0;
    int end = my_strlen(str)-1;

    while (begin < end) {
        char middle = str[begin];
        char middle2 = str[end];
        str[begin] = middle2;
        str[end] = middle;
        begin++;
        end--;
    }
    return (str);
}
