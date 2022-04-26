/*
** EPITECH PROJECT, 2021
** inverse speed prinnies
** File description:
** inverse y of prinnies when prinnies touch y = 0 or y = 1080
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void inverse_y(game_struct_t *game)
{
    list_prinny_t *tmp = game->entities.prinnies;

    do {
        if (sfSprite_getPosition(tmp->prinny.sprite).y <= 0)
            tmp->prinny.speed.y *= -1;
        else if (sfSprite_getPosition(tmp->prinny.sprite).y + 122 >= 1080)
            tmp->prinny.speed.y *= -1;
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
