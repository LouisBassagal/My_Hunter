/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Returns the number given as parameter.
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    int nb2 = nb;
    int count = 1;

    if (nb < 0) {
        nb = nb * - 1;
        nb2 = nb2 * -1;
        my_putchar('-');
    }
    while (nb2 >= 10) {
        nb2 = nb2 / 10;
        count = count * 10;
    }
    while (count != 1) {
        my_putchar((nb / count) + 48);
        nb = nb % count;
        count = count / 10;
    }
    my_putchar(nb + 48);
}
