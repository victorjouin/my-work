/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays a string
*/

#include<unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n = n + 1;
    }
    return (0);
}
