	/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)

int my_put_nbr(int n)
{
    if (n < 0)
    {
        my_putchar('-');
        n = -n;
    }
    if (n / 10)
    {
        my_put_nbr(n/10);
    } my_putchar(n %10 + '0');
    return (0);
}
