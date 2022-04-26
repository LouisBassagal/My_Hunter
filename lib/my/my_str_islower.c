/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** Returns 1 if str is full of lowercase else returns 0.
*/

#include <stdio.h>

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
