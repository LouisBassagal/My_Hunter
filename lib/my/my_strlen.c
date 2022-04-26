/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** Counts the length of a str.
*/

int my_strlen(char const *str)
{
    int number = 0;

    while (str[number] != '\0') {
        number = number + 1;
    }
    return (number);
}
