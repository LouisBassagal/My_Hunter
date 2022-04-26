/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** Displays N or P if negative or Positive.
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if ( n > -1 ) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}
