/*
** EPITECH PROJECT, 2019
** the_window
** File description:
** window
*/

#include "window.h"

window_t event(window_t win)
{
    win = texter(win);
    if (win.live == 0)
        sfRenderWindow_close(win.window);
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
        if (win.event.type == sfEvtKeyPressed) {
            win.count++;
        }
    }
    return (win);
}

window_t drawing(window_t win)
{
    win = hitbox(win);
    if (win.count != 0) {
        win = jump(win);
    }
    if (win.real == 23) {
        win.real = 0;
        win.count = 0;
    }
    win.rect.left = win.anime;
    win.anime += 142;
    if (win.anime >= 1150)
        win.anime = 0;
    sfRenderWindow_drawSprite(win.window, win.ground1_s, NULL);
    sfRenderWindow_drawSprite(win.window, win.ground2_s, NULL);
    sfRenderWindow_drawSprite(win.window, win.sprite, NULL);
    sfRenderWindow_drawSprite(win.window, win.car1_s, NULL);
    sfRenderWindow_drawSprite(win.window, win.car2_s, NULL);
    win = drawn(win);
    return (win);
}

window_t position(window_t win)
{
    win.counter++;
    win = which_one(win);
    sfSprite_setTextureRect(win.sprite, win.rect);
    sfSprite_setPosition(win.ground1_s, win.position);
    sfSprite_setPosition(win.ground2_s, win.position2);
    sfSprite_setPosition(win.sprite, win.pos_sprite);
    sfSprite_setPosition(win.car1_s, win.pos_car1);
    sfSprite_setPosition(win.car2_s, win.pos_car2);
    if (win.real == 0)
        win.pos_sprite.y = 775;
    win.pos_sprite.x = 150;
    win.position.x = win.move + win.point * 5;
    win.position2.x = (win.move * 2) + win.point * 5;
    win.move -= 9;
    if (win.move < -855) {
        win.move = 0;
    }
    return (win);
}

window_t boomer(window_t win)
{
    win = text_set(win);
    win.live = 45;
    win.counter = 1;
    win.point = 1;
    win.rect.width = 128;
    win.rect.height = 145;
    win.rect.top = 0;
    win = sprite_creator(win);
    return (win);
}

int main(int ac, char **av)
{
    window_t win;
    sfVideoMode mode = {1920, 1080, 32};

    if (ac == 2 && av[1][1] == 'h') {
        write (1, "you can jump with espace\n", 25);
        write (1, "dodge cars and plans !\n", 23);
        return (0);
    }
    win = boomer(win);
    win.window = sfRenderWindow_create(mode, "the_runner", sfClose, NULL);
    while (sfRenderWindow_isOpen(win.window)) {
        sfRenderWindow_clear(win.window, sfBlack);
        win = position(win);
        win = event(win);
        win = drawing(win);
        sfRenderWindow_display(win.window);
        sfRenderWindow_setFramerateLimit(win.window, 18 + (win.point * 2));
    }
    return (0);
}
