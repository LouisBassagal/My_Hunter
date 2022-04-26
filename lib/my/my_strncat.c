/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** Concatenates 2 strings.
*/

int my_strlen(char const *src);

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int length = my_strlen(dest);

    while (i < n) {
        dest[length + i] = src[i];
        i = i + 1;
    }
    dest[length + i] = '\0';
    return (dest);
}
