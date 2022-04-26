/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Copy a string in another.
*/

#include <stdio.h>

int my_strlen(char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int length = my_strlen(src);
    int length2 = 0;

    while (length2 < length || dest[length2] != '\0') {
        dest[length2] = src[length2];
        length2 = length2 + 1;
    }
    return (dest);
}
