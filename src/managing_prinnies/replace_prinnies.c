/*
** EPITECH PROJECT, 2021
** replace prinnies
** File description:
** replace when leave the screen
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static sfVector2f get_position_sprite_x(list_prinny_t *prinnies)
{
    sfVector2f sprite_pos;

    sprite_pos = sfSprite_getPosition(prinnies->prinny.sprite);
    return sprite_pos;
}

void replacing_prinnies(game_struct_t *game)
{
    list_prinny_t *tmp = game->entities.prinnies;
    sfVector2f position;
    sfVector2u window_size = sfRenderWindow_getSize(game->window);
    sfVector2f sprite_pos;
    int count = 0;

    do {
        position.x = -122;
        position.y = rand() % (window_size.y - 89);
        sprite_pos = get_position_sprite_x(tmp);
        if (sprite_pos.x > 2040.00) {
            changing_sprite_health(game);
            game->life_point -= 1;
            sfSprite_setPosition(tmp->prinny.sprite, position);
        }
        count += 1;
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
