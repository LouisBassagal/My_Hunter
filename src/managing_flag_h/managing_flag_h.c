/*
** EPITECH PROJECT, 2021
** managing flag h
** File description:
** managing h flag
*/

#include "my.h"

void managing_h_flag(char **argv, int argc)
{
    if (my_strcmp(argv[1], "-h") == 0 && argc == 2) {
        my_putstr("This program is a game where you have ");
        my_putstr("to click on ducks to win points, if a duck goes out ");
        my_putstr("of the screen 3 times, you will lose.\n");
        my_putstr("Use it without any flags to play\n");
    } else {
        my_putstr("Wrong flag(s), use -h flag only ");
        my_putstr("for more information\n");
    }
}
