/*
** EPITECH PROJECT, 2019
** event
** File description:
** event
*/

#include "window.h"

window_t start_jump(window_t win)
{
    win.pos_sprite.y -= 17;
    return (win);
}

window_t end_jump(window_t win)
{
    win.pos_sprite.y += 17;
    return (win);
}

window_t mid_jump(window_t win)
{
    return (win);
}

window_t jump(window_t win)
{
    win.real += 1;
    if (win.real < 10)
        win = start_jump(win);
    if (win.real > 10 && win.real <= 13)
        win = mid_jump(win);
    if (win.real > 13)
        win = end_jump(win);
    return (win);
}
