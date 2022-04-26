/*
** EPITECH PROJECT, 2021
** random_float
** File description:
** return a random float between two int
*/

#include <stdlib.h>

float random_float(int min, int max)
{
    float result;

    result = rand() % max;
    result /= 10;
    if (result == 0)
        result += 0.25;
    return result;
}
