/*
** EPITECH PROJECT, 2019
** binairy
** File description:
** cool
*/

#include <stdio.h>
#include <stdlib.h>

int my_putnbr(int n);
int my_putstr(char const *str);
void my_putchar(char c);

int binary_case(int final, int nb2, int result, int n)
{
    if (final % 2 == 0) {
        n = nb2 % 10;
        nb2 = nb2 / 10;
        result = result * 10 + n;
        my_putnbr(result);
        return (result);
    }
    else {
        my_putnbr(result);

    }
}

void binary(int n)
{
    int final = n;
    int nb = 0;
    int counter = 0;
    int result = 0;

    while (n > 0) {
        nb *= 10;
        nb += n % 2;
        n /= 2;
    }
    while (nb > 0) {
        result = result * 10 + n;
        n = nb % 10;
        nb = nb / 10;
    }
    result = result * 10 + n;
    result = binary_case(final, nb, result, n);
}
