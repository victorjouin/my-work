/*
** EPITECH PROJECT, 2019
** text
** File description:
** text
*/

#include "window.h"

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

window_t text_set(window_t win)
{
    win.font = sfFont_createFromFile("arial.ttf");
    win.text = sfText_create();
    win.point_string  = sfText_create();
    win.live_string = sfText_create();
    return (win);
}
window_t texter(window_t win)
{
    sfText_setString(win.text,"SCORE           PV");
    sfText_setCharacterSize(win.text, 30);
    sfText_setPosition(win.text, (sfVector2f) {10, 950});
    sfText_setColor(win.text,sfWhite);
    sfText_setFont(win.text, win.font);
    sfText_setString(win.point_string, nbr_chared(win.point));
    sfText_setCharacterSize(win.point_string, 30);
    sfText_setPosition(win.point_string, (sfVector2f) {150, 950});
    sfText_setColor(win.point_string, sfWhite);
    sfText_setFont(win.point_string, win.font);
    sfText_setString(win.live_string,nbr_chared(win.live));
    sfText_setCharacterSize(win.live_string, 30);
    sfText_setPosition(win.live_string, (sfVector2f) {280, 950});
    sfText_setColor(win.live_string,sfWhite);
    sfText_setFont(win.live_string, win.font);
    return (win);
}

window_t drawn(window_t win)
{
    sfRenderWindow_drawText(win.window, win.text, NULL);
    sfRenderWindow_drawText(win.window, win.point_string, NULL);
    sfRenderWindow_drawText(win.window, win.live_string, NULL);
    return (win);
}
