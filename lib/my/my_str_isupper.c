/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** Returns 1 if str is full of uppercase else returns 0.
*/

#include <stdio.h>

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
