/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** Puts every letter in uppercase.
*/

#include <stdio.h>

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.') {
            str[i] = str[i];
        } else {
            str[i] = str[i] + 32;
        }
        i = i + 1;
    }
    return str;
}
