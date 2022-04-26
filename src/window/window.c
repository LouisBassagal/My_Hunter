/*
** EPITECH PROJECT, 2021
** window
** File description:
** Function to create the window
*/

#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

sfRenderWindow *create_window(int width, int height)
{
    sfVideoMode mode = {width, height, 32};
    sfRenderWindow *win;

    win = sfRenderWindow_create(mode, "Prinnies' Hunt", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win, 60);
    return win;
}