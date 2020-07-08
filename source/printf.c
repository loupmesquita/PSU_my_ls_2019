/*
** EPITECH PROJECT, 2019
** my_print
** File description:
** my_print
*/

#include "../includes/phoenix.h"

int    printfcaze(const char *str, va_list args, ...)
{
    int i, final;

    i = 0;

    while (str[i] != '\0')
    {
        switch (str[i])
        {
            case '%':
                flags(str, i, final, args);
                flags2(str, i, final, args);
                i++;
            break;
            default:
                my_putchar(str[i]);
                break;
        }
        i++;
    }
}

int flags(const char *str, int i, int final, va_list args)
{
    switch (str[++i])
    {
        case 'i':
        case 'd':
            my_put_nbr(va_arg(args, int));
            break;
        case 'c':
            my_putchar(va_arg(args, int));
            break;
        case 'u':
            final += my_put_nbruns(va_arg(args, unsigned int));
            break;
        case 's':
            my_putstr(va_arg(args, char *));
            break;
    }
}

int flags2(const char *str, int i, int final, va_list args)
{
    switch (str[++i])
    {
        case 'b':
            my_put_nbrbin(va_arg(args, unsigned int));
            break;
        case 'o':
            my_put_nbroct(va_arg(args, int));
            break;
        case 'p':
            myprintp(va_arg(args, long int), str[i]);
            break;
        case 'x':
        case 'X':
            my_put_nbrhex(va_arg(args, unsigned int), str[i]);
            break;
        case '%':
            my_putchar('%');
            break;
    }
}

int    my_printf(const char *str, ...)
{
    int resultat;
    va_list list;

    va_start(list, str);

    resultat = printfcaze(str, list);

    va_end(list);

    return resultat;
}
