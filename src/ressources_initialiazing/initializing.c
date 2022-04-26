/*
** EPITECH PROJECT, 2021
** initializing
** File description:
** initialize ressources
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my_hunter.h"

static int initialize_score(game_struct_t *game)
{
    sfText_setString(game->entities.score, "0");
    sfText_setPosition(game->entities.score, (sfVector2f){0, 0});
    sfText_setFont(game->entities.score, game->entities.font);
    sfText_setFillColor(game->entities.score, sfBlack);
    sfText_setOutlineColor(game->entities.score, sfWhite);
    sfText_setOutlineThickness(game->entities.score, 1);
    game->entities.game_over = sfText_create();
    sfText_setString(game->entities.game_over, "Game Over");
    sfText_setPosition(game->entities.game_over, (sfVector2f){600, 500});
    sfText_setFont(game->entities.game_over, game->entities.font);
    sfText_setFillColor(game->entities.game_over, sfBlack);
    sfText_setOutlineColor(game->entities.game_over, sfWhite);
    sfText_setOutlineThickness(game->entities.game_over, 1);
    sfText_setCharacterSize(game->entities.game_over, 100);
}

static int initialize_game_texture(game_struct_t *game)
{
    char const *path_prinn = "./img/spin_prinny.png";
    char const *path_bg = "./img/bg.png";
    char const *path_health_bar = "./img/health_bar.png";
    char const *path_menu = "./img/menu.png";

    game->textures.bg_texture = sfTexture_createFromFile(path_bg, NULL);
    if (game->textures.bg_texture == NULL)
        return 84;
    game->textures.prinny_texture = sfTexture_createFromFile(path_prinn, NULL);
    if (game->textures.prinny_texture == NULL)
        return 84;
    game->textures.health_bar_texture = \
    sfTexture_createFromFile(path_health_bar, NULL);
    if (game->textures.health_bar_texture == NULL)
        return 84;
    game->textures.menu_texture = sfTexture_createFromFile(path_menu, NULL);
    if (game->textures.menu_texture == NULL)
        return 84;
    return 0;
}

static int initialize_game_entities_next(game_struct_t *game)
{
    game->entities.menu_sprite = sfSprite_create();
    sfSprite_setTexture(game->entities.menu_sprite, \
    game->textures.menu_texture, sfTrue);
    if (game->entities.menu_sprite == NULL)
        return 84;
    game->entities.arrow_sprite = sfSprite_create();
    sfSprite_setTexture(game->entities.arrow_sprite, \
    game->textures.arrow_texture, sfTrue);
    if (game->entities.arrow_sprite == NULL)
        return 84;
}

static int initialize_game_entities(game_struct_t *game)
{
    game->entities.bg_sprite = sfSprite_create();
    sfSprite_setTexture(game->entities.bg_sprite, game->textures.bg_texture, \
    sfTrue);
    if (game->entities.bg_sprite == NULL)
        return 84;
    game->entities.prinnies = NULL;
    if (add_prinnies(game, 2) == 84)
        return 84;
    game->entities.health_bar = sfSprite_create();
    sfSprite_setTexture(game->entities.health_bar, \
    game->textures.health_bar_texture, sfTrue);
    if (game->entities.health_bar == NULL)
        return 84;
    rect_health_bar(game);
    game->entities.prinnies->prinny.sprite = sfSprite_create();
    game->entities.score = sfText_create();
    game->entities.font = sfFont_createFromFile("./font/rexlia_rg.otf");
    initialize_score(game);
    game->nbr_score = 0;
    game->entities.music = sfMusic_createFromFile("msc/main_theme.ogg");
}

int initialize_game_resources(game_struct_t *game)
{
    game->mode = (sfVideoMode){1920, 1080, 32};
    game->window = sfRenderWindow_create(game->mode, "Hunt", sfClose, NULL);
    game->textures.prinny_texture = NULL;
    game->clocks.speed_clock = sfClock_create();
    game->clocks.prinnies_clock = sfClock_create();
    game->clocks.music_clock = sfClock_create();
    if (initialize_game_texture(game) == 84)
        return 84;
    game->textures.arrow_texture = sfTexture_createFromFile("./img/arrow.png"\
    , NULL);
    if (initialize_game_entities(game) == 84)
        return 84;
    if (initialize_game_entities_next(game) == 84)
        return 84;
    sfSprite_setPosition(game->entities.health_bar, (sfVector2f){0, 900});
    sfSprite_setPosition(game->entities.arrow_sprite, (sfVector2f){-120, 470});
    sfSprite_setScale(game->entities.arrow_sprite, (sfVector2f){0.5, 0.5});
    game->arrow_location = 0;
    game->status = 0;
    game->life_point = 3;
}
