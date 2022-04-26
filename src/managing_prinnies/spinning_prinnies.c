/*
** EPITECH PROJECT, 2021
** spinnning_prinnies
** File description:
** spinning prinnies
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static int clock_for_sprite(game_struct_t *game, sfClock *clock)
{
    sfTime time;
    float seconds = 0.0;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        return 1;
    }
    return 0;
}

void spinning_prinnies(game_struct_t *game)
{
    list_prinny_t *tmp = game->entities.prinnies;
    sfIntRect rect = sfSprite_getTextureRect(tmp->prinny.sprite);
    float seconds = 0.0;

    rect.left += 89;
    rect.height = 122;
    rect.width = 89;
    if (rect.left >= 1424)
        rect.left = 0;
    do {
        if (clock_for_sprite(game, tmp->prinny.clock) == 1) {
            sfSprite_setTextureRect(tmp->prinny.sprite, rect);
            sfClock_restart(tmp->prinny.clock);
        }
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
