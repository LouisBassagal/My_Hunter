/*
** EPITECH PROJECT, 2021
** drawing score
** File description:
** drawing score
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void drawing_score(game_struct_t *game)
{
    char *str = NULL;

    str = int_to_str(game->nbr_score);
    sfText_setString(game->entities.score, str);
    sfRenderWindow_drawText(game->window, game->entities.score, NULL);
    free(str);
}
