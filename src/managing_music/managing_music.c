/*
** EPITECH PROJECT, 2021
** managing music
** File description:
** managing music
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "my_hunter.h"

void check_music_restart(game_struct_t *game)
{
    sfTime time;
    float seconds = 0.0;

    time = sfClock_getElapsedTime(game->clocks.music_clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 139.8) {
        sfMusic_stop(game->entities.music);
        sfMusic_play(game->entities.music);
        sfClock_restart(game->clocks.music_clock);
    }
}
