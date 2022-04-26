/*
** EPITECH PROJECT, 2021
** my_show_list
** File description:
** Displays a linked list.
*/

int my_putstr(char const *str);

void my_show_list(linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_putstr(tmp->argument);
        my_putstr("\n");
        tmp = tmp->next;
    }
}
