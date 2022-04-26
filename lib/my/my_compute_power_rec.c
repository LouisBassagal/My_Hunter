/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** Returns a number raised to the power.
*/
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int power = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0 || nb == 0) {
        return (0);
    }
    if (p > 0) {
        power = my_compute_power_rec(nb, p - 1) * power;
        return (power);
    }
}
