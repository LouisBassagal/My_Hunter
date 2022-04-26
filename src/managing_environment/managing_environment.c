/*
** EPITECH PROJECT, 2021
** managing environment
** File description:
** managing_environment
*/

#include <stdlib.h>
#include "my.h"

int managing_environment(char **env)
{
    if (env == NULL)
        return 84;
    for (int i = 0; env[i] != NULL; i += 1) {
        if (my_strncmp(env[i], "DISPLAY", 7) == 0) {
            return 0;
        }
    }
    return 84;
}
