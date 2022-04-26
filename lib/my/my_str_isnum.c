/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Returns 1 if str is full of digits else returns 0.
*/

#include <stdio.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
