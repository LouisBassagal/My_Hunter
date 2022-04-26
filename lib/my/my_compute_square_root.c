/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** Returns the square root of a number.
*/
#include <stdio.h>

int my_compute_square_root(int nb)
{
    int count = 1;

    if (nb <= 0) {
        return (0);
    }
    while (count != nb) {
        count = count + 1;
        if (count * count == nb) {
            return (count);
        }
        if (count == nb || nb > 2147395600) {
            return (0);
        }
    }
}
