/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

int my_conststrlen(char const *str)
{
    int   i;
    i = 0;
    while (str[i] != '\0')
    {
            i = i + 1;
        }
    return (i);
}

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i = i + 1;
    return (i);
}
