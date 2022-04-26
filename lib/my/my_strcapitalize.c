/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word.
*/

#include <stdio.h>

char *my_strcapitalize(char *str)
{
    int n = 0;

    while (str[n] != '\0') {
        if (n == 0 && str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
        if (str[n - 1] == ' ' && str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
        if (str[n - 1] == '-' && str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
        if (str[n - 1] == '+' && str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
        if (str[n - 1] != ' ' && str[n] >= 'A' && str[n] <= 'Z')
            str[n] = str[n] + 32;
        n = n + 1;
    }
}
