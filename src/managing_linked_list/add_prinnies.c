/*
** EPITECH PROJECT, 2021
** add_prinnies
** File description:
** adding prinnies
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "my_hunter.h"

static int set_random_position(game_struct_t *game, list_prinny_t *new)
{
    sfVector2u window_size = sfRenderWindow_getSize(game->window);
    sfVector2f position;

    position.x = -1 *(rand() % 200) - \
    sfSprite_getTextureRect(new->prinny.sprite).width;
    position.y = rand() % (window_size.y - 122);
    sfSprite_setPosition(new->prinny.sprite, position);
    return 0;
}

static list_prinny_t *initializing_arguments(game_struct_t *game)
{
    list_prinny_t *new = malloc(sizeof(list_prinny_t));
    sfClock *clock = sfClock_create();

    define_prinny_essence(new, game);
    new->prinny.clock = clock;
    return new;
}

static int add_prinny(game_struct_t *game)
{
    list_prinny_t *new = NULL;
    game->entities.prinnies == NULL;

    new = initializing_arguments(game);
    set_random_position(game, new);
    if (game->entities.prinnies == NULL) {
        new->next = new;
        new->prev = new;
        game->entities.prinnies = new;
    } else {
        new->next = game->entities.prinnies;
        new->prev = game->entities.prinnies->prev;
        game->entities.prinnies->prev->next = new;
        game->entities.prinnies->prev = new;
    }
    return 0;
}

int add_prinnies(game_struct_t *game, int n_prinny)
{
    for (int i = 1; i <= n_prinny; i += 1) {
        if (add_prinny(game) == 84)
            return 84;
    }
    return 0;
}
