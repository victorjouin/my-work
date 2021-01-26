/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** display N if number is negative or P is possitive
*/

#include<unistd.h>

void my_putchar(char c);

int my_isneg (int n)
{
    int x = n;

    if (x < 0)
    {
        my_putchar('N');
    }
    else
    {
        my_putchar('P');
    }
    return (0);
}
