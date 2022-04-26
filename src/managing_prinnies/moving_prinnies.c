/*
** EPITECH PROJECT, 2021
** moving prinnies
** File description:
** Function to move prinnies
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void moving_prinnies(game_struct_t *game)
{
    list_prinny_t *tmp = game->entities.prinnies;
    sfVector2f movement;

    do {
        movement.x = tmp->prinny.speed.x;
        movement.y = tmp->prinny.speed.y;
        sfSprite_move(tmp->prinny.sprite, movement);
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
