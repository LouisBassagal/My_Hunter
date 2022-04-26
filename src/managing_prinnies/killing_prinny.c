/*
** EPITECH PROJECT, 2021
** killing prinny
** File description:
** killing a fucking prinny
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

static int is_prinny_hit(list_prinny_t *tmp, sfMouseButtonEvent click)
{
    int flag = 0;
    int height = sfSprite_getTextureRect(tmp->prinny.sprite).height;
    int width = sfSprite_getTextureRect(tmp->prinny.sprite).width;
    sfVector2f position_prinny = sfSprite_getPosition(tmp->prinny.sprite);

    if (click.x >= position_prinny.x && click.x <= position_prinny.x + width)
        flag += 1;
    if (click.y >= position_prinny.y && click.y <= position_prinny.y + height)
        flag += 1;
    if (flag == 2)
        return 1;
    return 0;
}

static void reset_prinny(list_prinny_t *tmp, game_struct_t *game)
{
    define_prinny_essence(tmp, game);
}

void killing_prinny(game_struct_t *game, sfMouseButtonEvent click)
{
    list_prinny_t *tmp = game->entities.prinnies;

    do {
        if (is_prinny_hit(tmp, click) == 1) {
            game->nbr_score += 100;
            reset_prinny(tmp, game);
        }
        tmp = tmp->next;
    } while (tmp != game->entities.prinnies);
}
