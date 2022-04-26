/*
** EPITECH PROJECT, 2021
** managing_menu
** File description:
** managing menu
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static void move_arrow_down(game_struct_t *game)
{
    sfSprite_move(game->entities.arrow_sprite, (sfVector2f){0, 145});
    game->arrow_location = 1;
}

static void move_arrow_up(game_struct_t *game)
{
    sfSprite_move(game->entities.arrow_sprite, (sfVector2f){0, -145});
    game->arrow_location = 0;
}

static void menu_displaying(game_struct_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->entities.menu_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->entities.arrow_sprite, NULL);
}

void event_menu(game_struct_t *game)
{
    sfEvent event;

    menu_displaying(game);
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        if (event.key.code == sfKeyDown && game->arrow_location == 0)
            move_arrow_down(game);
        if (event.key.code == sfKeyUp && game->arrow_location == 1)
            move_arrow_up(game);
        if (event.key.code == sfKeyEnter && game->arrow_location == 0)
            game->status = 1;
        if (event.key.code == sfKeyEnter && game->arrow_location == 1)
            sfRenderWindow_close(game->window);
    }
    sfRenderWindow_display(game->window);
}
