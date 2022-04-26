/*
** EPITECH PROJECT, 2021
** adding prinny
** File description:
** Adding prinny after a certain amout of time
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void adding_prinny(game_struct_t *game)
{
    sfTime time;
    float seconds = 0.0;

    time = sfClock_getElapsedTime(game->clocks.prinnies_clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 30) {
        add_prinnies(game, 1);
        sfClock_restart(game->clocks.prinnies_clock);
    }
}
