/*
** EPITECH PROJECT, 2019
** myhunter.c
** File description:
** the game
*/

#include "stocker.h"

stock_t shoter(stock_t pop)
{
    if (pop.mouse.x > pop.position.x && pop.mouse.x < pop.position.x + 110
        && pop.mouse.y > pop.position.y && pop.mouse.y < pop.position.y + 110) {
        pop.move = -110;
        pop.mouse_coord.x = pop.mouse.x - 125;
        pop.mouse_coord.y = pop.mouse.y - 125;
        pop.mouse.x = 0;
        pop.mouse.y = 0;
        pop.point += 1;
        pop.position.y = 50 + rand() % 700;
    }
    pop.mouse.x = 0;
    pop.mouse.y = 0;
    return (pop);
}

stock_t setposition(stock_t pop, sfEvent event, sfIntRect rect)
{
    sfSprite_setPosition(pop.sprite, pop.position);
    sfSprite_setPosition(pop.curseur_s, pop.mouse_coord);
    sfSprite_setTextureRect(pop.sprite, rect);
    pop.mouse_coord.x = - 500;
    pop.mouse_coord.y = - 500;
    return (pop);
}

stock_t position_and_closer(stock_t pop, sfIntRect rect, sfEvent event)
{
    pop.position.x = pop.move;
    pop.move += 20 + (pop.point * 1.8);
    if (pop.move >= 1950) {
        pop.move = -30;
        pop.live -= 1;
    }
    if (pop.live == 0)
        sfRenderWindow_close(pop.window);
    pop = setposition(pop, event, rect);
    pop.position.y += pop.al_number;
    sfRenderWindow_display(pop.window);
    sfRenderWindow_setFramerateLimit(pop.window, 18);
    pop = shoter(pop);
    while (sfRenderWindow_pollEvent(pop.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(pop.window);
        if (event.type == sfEvtMouseButtonPressed) {
            pop.mouse = sfMouse_getPositionRenderWindow(pop.window);
        }
    } return (pop);
}

stock_t drawing_the_window(stock_t pop, sfEvent event, sfIntRect rect)
{
    while (sfRenderWindow_isOpen(pop.window)) {
        if (pop.animation == 330) {
            pop.al_number = rand_number(-15, 15);
            pop.animation = 0;
        }
        rect.left = pop.animation;
        pop = position_and_closer(pop, rect, event);
        sfRenderWindow_clear(pop.window, sfBlack);
        pop = texter(pop);
        sfRenderWindow_drawSprite(pop.window, pop.back_s, NULL);
        sfRenderWindow_drawText(pop.window, pop.text, NULL);
        sfRenderWindow_drawText(pop.window, pop.point_string, NULL);
        sfRenderWindow_drawText(pop.window, pop.live_string, NULL);
        sfRenderWindow_drawSprite(pop.window, pop.curseur_s, NULL);
        sfRenderWindow_drawSprite(pop.window, pop.sprite, NULL);
        pop.animation = pop.animation + 110;
    }
    return (pop);
}

stock_t sprite_creator(stock_t pop)
{
    pop.back = sfTexture_createFromFile("back.jpg", NULL);
    pop.back_s = sfSprite_create();
    sfSprite_setTexture(pop.back_s, pop.back, sfTrue);
    pop.curseur = sfTexture_createFromFile("curseur.png", NULL);
    pop.curseur_s = sfSprite_create();
    sfSprite_setTexture(pop.curseur_s, pop.curseur, sfTrue);
    pop.texture = sfTexture_createFromFile("Spritesheet.jpg", NULL);
    pop.sprite = sfSprite_create();
    sfSprite_setTexture(pop.sprite, pop.texture, sfTrue);
    return (pop);
}
