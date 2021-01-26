/*
** EPITECH PROJECT, 2019
** text
** File description:
** text
*/

#include "stocker.h"

char *my_revstr(char *str)
{
    int N = 0;
    int c = 0;
    char ephemere;
    char *stocker = str;
    int caract = 0;

    while (str[c] != '\0') {
        c = c + 1;
    } c = c - 1;
    N = c/2;
    while (c > N) {
        ephemere = stocker[caract];
        str[caract] = stocker[c];
        str[c] = ephemere;
        caract = caract + 1;
        c = c - 1;
    }
    return (str);
}

char *nbr_chared(int nb)
{
    int counter = 0;
    char *str = malloc(sizeof(char) * 1000);

    while (nb) {
        str[counter] = nb % 10 + '0';
        nb /= 10;
        counter++;
    }
    str[counter] = '\0';
    my_revstr(str);
    return (str);
}

stock_t texter(stock_t pop)
{
    sfText_setString(pop.text,"SCORE           LIFE");
    sfText_setCharacterSize(pop.text, 30);
    sfText_setPosition(pop.text, (sfVector2f) {10, 950});
    sfText_setColor(pop.text,sfWhite);
    sfText_setFont(pop.text, pop.font);
    sfText_setString(pop.point_string, nbr_chared(pop.point));
    sfText_setCharacterSize(pop.point_string, 30);
    sfText_setPosition(pop.point_string, (sfVector2f) {150, 950});
    sfText_setColor(pop.point_string, sfWhite);
    sfText_setFont(pop.point_string, pop.font);
    sfText_setString(pop.live_string,nbr_chared(pop.live));
    sfText_setCharacterSize(pop.live_string, 30);
    sfText_setPosition(pop.live_string, (sfVector2f) {280, 950});
    sfText_setColor(pop.live_string,sfWhite);
    sfText_setFont(pop.live_string, pop.font);
    return (pop);
}
