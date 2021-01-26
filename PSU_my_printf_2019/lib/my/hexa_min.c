/*
** EPITECH PROJECT, 2019
** hexa
** File description:
** you do you
*/

#include <stdlib.h>
#include "../../include/my.h"

void printer(char *stouck)
{
    stouck = my_revstr(stouck);
    my_putstr(stouck);
}

void hexa_min(int n)
{
    int nb = 0;
    int counter = 0;
    char *stouck = malloc(sizeof(int) * 20);

    while (n) {
        if (n % 16 >= 10) {
            nb = (n % 16) - 10;
            stouck[counter] = ('a' + nb);
            n /= 16;
            counter++;
        }
        if (n % 16 < 10) {
            nb = n % 16;
            stouck[counter] = nb + '0';
            n /= 16;
            counter++;
        }
        stouck[counter] = '\0';
    }
    printer(stouck);
    free(stouck);
}
