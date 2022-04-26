/*
** EPITECH PROJECT, 2021
** define prinny essence
** File description:
** define the essence of a prinny
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my_hunter.h"

static sfIntRect create_prinny_rect(void)
{
    sfIntRect rect;

    rect.width = 89;
    rect.height = 122;
    rect.left = 89 * (rand() % 15);
    rect.top = 0;
    return rect;
}

void define_prinny_essence(list_prinny_t *new, game_struct_t *game)
{
    sfIntRect rect = create_prinny_rect();
    sfVector2f position = {.x = (rand() % 100) * -1, .y = rand() % 958};

    new->prinny.sprite = sfSprite_create();
    sfSprite_setTexture(new->prinny.sprite, game->textures.prinny_texture, \
    sfTrue);
    sfSprite_setTextureRect(new->prinny.sprite, rect);
    new->prinny.speed = (sfVector2f){random_float(0, 5), random_float(0, 5)};
    sfSprite_setPosition(new->prinny.sprite, position);
}
