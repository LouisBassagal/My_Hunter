/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** Function for my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static void event_check(game_struct_t *game_rsc)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(game_rsc->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game_rsc->window);
        if (event.type == sfEvtMouseButtonPressed)
            killing_prinny(game_rsc, event.mouseButton);
    }
}

static void function_my_hunter(game_struct_t *game)
{
    sfRenderWindow_drawSprite(game->window, \
    game->entities.bg_sprite, NULL);
    printing_prinnies(game);
    moving_prinnies(game);
    spinning_prinnies(game);
    replacing_prinnies(game);
    adding_prinny(game);
    inverse_y(game);
    drawing_score(game);
    check_music_restart(game);
    displaying_health(game);
    sfRenderWindow_display(game->window);
    if (game->life_point == 0)
        game->status = 3;
}

int my_hunter(void)
{
    game_struct_t game_rsc;

    srand(time(NULL));
    if (initialize_game_resources(&game_rsc) == 84)
        return 84;
    sfMusic_play(game_rsc.entities.music);
    while (sfRenderWindow_isOpen(game_rsc.window)) {
        if (game_rsc.status == 0) {
            event_menu(&game_rsc);
        } else if (game_rsc.status == 1) {
            event_check(&game_rsc);
            function_my_hunter(&game_rsc);
        } else 
            managing_game_over(&game_rsc);
    }
    sfMusic_stop(game_rsc.entities.music);
    sfMusic_destroy(game_rsc.entities.music);
    sfText_destroy(game_rsc.entities.score);
    return 0;
}
