/*
** EPITECH PROJECT, 2020
** ok
** File description:
** ok
*/

#include "window.h"

window_t sprite_creator(window_t win)
{
    win.pos_car2.y = 830;
    win.pos_car1.x = 2000;
    win.pos_car2.x = 2000;
    win.anime = 0;
    win.move = 0;
    win.real = 0;
    win.real2 = 0;
    win.real2 = 0;
    win = create(win);
    win.ground1 = sfTexture_createFromFile("ground1.jpg", NULL);
    win.ground1_s = sfSprite_create();
    sfSprite_setTexture(win.ground1_s, win.ground1, sfTrue);
    win.ground2 = sfTexture_createFromFile("ground2.png", NULL);
    win.ground2_s = sfSprite_create();
    sfSprite_setTexture(win.ground2_s, win.ground2, sfTrue);
    win.texture = sfTexture_createFromFile("sprite.png", NULL);
    win.sprite = sfSprite_create();
    sfSprite_setTexture(win.sprite, win.texture, sfTrue);
    return (win);
}
