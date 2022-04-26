/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** Allocates memory and copies the str.
*/

#include <stdlib.h>

int my_strlen(char const *src);

char *my_strdup(char const *src)
{
    int i = 0;
    int length = my_strlen(src);
    char *dest = malloc(sizeof(char) * length + 1); 

    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
