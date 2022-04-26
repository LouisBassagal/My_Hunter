/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** ???
*/

#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int count = 0;

    while (count != n) {
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
