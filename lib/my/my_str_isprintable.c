/*
** EPITECH PROJECT, 2021
** my_str_isprintable.
** File description:
** Returns 1 if str is printable else 0.
*/

#include <stdio.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
