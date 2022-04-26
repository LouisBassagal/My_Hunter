/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Search and display a word in a string.
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *src);

char *my_strstr(char *str, char const *to_find)
{
    int nb1 = 0;
    int nb2 = 0;
    int flag = 0;

    while (str[nb1] != '\0' && to_find[nb2] != '\0') {
        if (str[nb1] == to_find[nb2]) {
            nb1 = nb1 + 1;
            nb2 = nb2 + 1;
            flag = flag + 1;
        } else {
            nb1 = nb1 + 1;
        }
    }
    if (flag > 0)
        return (&str[nb1] - nb2);
    else {
        return (NULL);
    }
}
