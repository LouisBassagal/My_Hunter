/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** ???
*/

#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;

    while (s1[count] != '\0') {
        if (s1[count] < s2[count]) {
            return s1[count] - s2[count];
        }
        if (s1[count] > s2[count]) {
            return s1[count] - s2[count];
        }
        count = count + 1;
    }
    return 0;
}
