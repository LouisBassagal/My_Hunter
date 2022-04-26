/*
** EPITECH PROJECT, 2021
** changing_sprite_health
** File description:
** changing sprite of health bar when prinnies go out of the screen
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my_hunter.h"

void rect_health_bar(game_struct_t *game)
{
    sfIntRect rect = {0, 0, 1824, 480};

    sfSprite_setTextureRect(game->entities.health_bar, rect);
}

void changing_sprite_health(game_struct_t *game)
{
    sfIntRect tmp = sfSprite_getTextureRect(game->entities.health_bar);

    if (tmp.left < 5472) {
        tmp.left += 1824;
        sfSprite_setTextureRect(game->entities.health_bar, tmp);
    }
}
