/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** Reverses a string.
*/

#include <stdio.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int x = 0;
    int y = my_strlen(str) - 1;
    char temp;

    while (x < y) {
        temp = str[y];
        str[y] = str[x];
        str[x] = temp;
        x = x + 1;
        y = y - 1;
    }
    return (str);
}
