/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <unistd.h>
#include "my.h"
#include "my_hunter.h"

int main(int argc, char **argv, char **env)
{
    if (managing_environment(env) == 84)
        return 84;
    if (argc > 1) {
        managing_h_flag(argv, argc);
    } else {
        my_hunter();
    }
}