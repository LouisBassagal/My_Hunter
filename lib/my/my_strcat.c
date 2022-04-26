/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Concatenates 2 strings.
*/

int my_strlen(char const *src);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int length = my_strlen(dest);

    while (src[i] != '\0') {
        dest[length + i] = src[i];
        i = i + 1;
    }
    dest[length + i + 1] = '\0';
    return (dest);
}
