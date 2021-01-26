	/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        my_putnbr(nb/10);
    }
    my_putchar(nb %10 + '0');
    my_putchar('\0');
    return (0);
}
