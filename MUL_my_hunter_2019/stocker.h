/*
** EPITECH PROJECT, 2019
** stock
** File description:
** the stock
*/

#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <SFML/System.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics.h>
#include <stdio.h> 

#ifndef POP_H
#define POP_H 

typedef struct s_stock{
    int animation;
    int miss;
    int point;
    int live;
    int al_number;
    float move;
    sfFont *font;
    sfText *text;
    sfText *point_string;
    sfText *live_string;
    sfVector2i mouse;
    sfVector2f position;
    sfVector2f text_pos;
    sfVector2f mouse_coord;
    sfRenderWindow *window;
    sfTexture *texture;
    sfTexture *back;
    sfTexture *curseur;
    sfSprite *curseur_s;
    sfSprite *back_s;
    sfSprite *sprite;
    sfEvent event;   
}stock_t;

stock_t shoter(stock_t pop);
stock_t setposition(stock_t pop, sfEvent event, sfIntRect rect);
stock_t position_and_closer(stock_t pop, sfIntRect rect, sfEvent event);
stock_t drawing_the_window(stock_t pop, sfEvent event, sfIntRect rect);
stock_t sprite_creator(stock_t pop);
int rand_number(float min, int max);
stock_t texter(stock_t pop);
char *nbr_chared(int nb);
stock_t text_set(stock_t pop);
void help(void);

#endif
