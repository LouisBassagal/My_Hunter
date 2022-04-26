/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** Copy a string in another.
*/

#include <stdio.h>

int my_strlen(char const *src);

char *my_strncpy(char *dest, char const *src, int n)
{
    int length = my_strlen(src);
    int length2 = 0;

    while (length2 < n) {
        dest[length2] = src[length2];
        length2 = length2 + 1;
    }
    if (n > length) {
        dest[length2 + 1] = '\0';
    }
    return (dest);
}
