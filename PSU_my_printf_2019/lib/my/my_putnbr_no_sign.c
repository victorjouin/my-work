/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

long int my_putnbr_no_sign(long int n)
{
    long int grosse = 4294967296;

    if (n > 9) {
        my_putnbr_no_sign(n / 10);
        my_putchar('\0');
    }
    if (n < 0) {
       n = grosse - n;
    }
    my_putchar(n % 10 + '0');
    my_putchar('\0');
    return (0);
}
