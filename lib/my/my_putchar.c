/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** Displays one character.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
