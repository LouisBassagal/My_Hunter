/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** Returns the first number in a string.
*/

#include <stdio.h>

static int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else {
        return 0;
    }
}

int my_getnbr(char const *str)
{
    int c = 0;
    int sign = 1;
    long other = 0;

    while (str[c] == '+' || str[c] == '-') {
        if (str[c] == '-')
            sign = sign * (-1);
        c = c + 1;
    }
    while (is_num(str[c]) == 1) {
        other = other + (str[c] - 48);
        if (is_num(str[c + 1]) == 1)
            other = other * 10;
        c = c + 1;
    }
    other = other * sign;
    if (other > 2147483647 || other < -2147483648)
        return 0;
    return other;
}
