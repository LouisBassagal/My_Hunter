/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Returns 1 if str is full of char else returns 0.
*/

#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            i = i + 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
