/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** Function that swap the content of two integer
*/

void my_swap(int *a, int *b)
{
    int temporary = *a;

    *a = *b;
    *b = temporary;
}
