/*
** EPITECH PROJECT, 2021
** managing game over
** File description:
** managing game over
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static void reset_prinny_list(list_prinny_t **list)
{
    list_prinny_t *tmp = (*list);
    list_prinny_t *save = (*list);

    do {
        (*list) = (*list)->next;
        sfSprite_destroy(tmp->prinny.sprite);
        sfClock_destroy(tmp->prinny.clock);
        free(tmp);
        tmp = (*list);
    } while ((*list) != save);
    (*list) = NULL;
}

static void game_over_event(game_struct_t *game)
{
    sfEvent event;
    sfIntRect rect;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        if (event.type == sfEvtKeyPressed) {
            rect = sfSprite_getTextureRect(game->entities.health_bar);
            rect.left = 0;
            game->life_point = 3;
            sfSprite_setTextureRect(game->entities.health_bar, rect);
            reset_prinny_list(&game->entities.prinnies);
            add_prinnies(game, 2);
            game->nbr_score = 0;
            game->status = 0;
            sfClock_restart(game->clocks.prinnies_clock);
        }
    }
}

void managing_game_over(game_struct_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->entities.bg_sprite, NULL);
    sfRenderWindow_drawText(game->window, game->entities.game_over, NULL);
    sfRenderWindow_display(game->window);
    game_over_event(game);
}
