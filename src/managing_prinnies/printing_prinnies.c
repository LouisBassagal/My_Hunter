/*
** EPITECH PROJECT, 2021
** printing prinnies
** File description:
** printing prinnies
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void printing_prinnies(game_struct_t *game)
{
    list_prinny_t *tmp = game->entities.prinnies;

    do {
        sfRenderWindow_drawSprite(game->window, tmp->prinny.sprite, NULL);
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
