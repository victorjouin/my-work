/*
** EPITECH PROJECT, 2019
** window
** File description:
** window
*/

#ifndef PUP_H
#define PUP_H

#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <SFML/System.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <unistd.h> 

typedef struct window_s
{
    int live;
    int counter;
    int point;
    int anime;
    int real;
    float move;
    float real2;
    float real3;
    sfFont *font;
    sfText *text;
    sfText *point_string;
    sfText *live_string;
    sfTexture *car1;
    sfTexture *car2;
    sfSprite *car1_s;
    sfSprite *car2_s;
    sfVector2f text_pos;
    sfVector2f pos_car1;
    sfVector2f pos_car2;
    sfVector2f position;
    sfVector2f position2;
    sfVector2f pos_sprite;
    sfTexture *texture;
    sfTexture *ground1;
    sfTexture *ground2;
    sfSprite *ground1_s;
    sfSprite *ground2_s;
    sfSprite *sprite;
    sfIntRect rect;
    int count;
    sfRenderWindow *window;
    sfEvent event;
}window_t;

window_t event(window_t win);
window_t sprite_creator(window_t win);
window_t drawing(window_t win);
window_t position(window_t win);
window_t start_jump(window_t win);
window_t end_jump(window_t win);
window_t mid_jump(window_t win);
window_t jump(window_t win);
window_t drawn(window_t win);
float rand_number(float min, int max);
window_t create(window_t win);
window_t car1_is_here(window_t win);
window_t car2_is_here(window_t win);
window_t which_one(window_t win);
window_t hitbox(window_t win);
window_t text_set(window_t win);
window_t texter(window_t pop);

#endif
