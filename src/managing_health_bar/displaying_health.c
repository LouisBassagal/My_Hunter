/*
** EPITECH PROJECT, 2021
** displaying health
** File description:
** displaying health
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my_hunter.h"

void displaying_health(game_struct_t *game)
{
    sfVector2f scale = {0.25, 0.25};

    sfSprite_setScale(game->entities.health_bar, scale);
    sfRenderWindow_drawSprite(game->window, game->entities.health_bar, NULL);
}
