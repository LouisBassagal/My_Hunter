/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Function that display, one-by-one, the charaters of string.
*/
#include <unistd.h>

void my_putchar(char c);

void my_putstr(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        my_putchar(str[count]);
        count = count + 1;
    }
}
