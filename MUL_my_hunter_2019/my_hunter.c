/*
** EPITECH PROJECT, 2019
** junter
** File description:
** hunter
*/

#include "stocker.h"
#include <unistd.h>

stock_t destroyer(stock_t pop)
{
    sfText_destroy(pop.text);
    sfText_destroy(pop.point_string);
    sfText_destroy(pop.live_string);
    sfFont_destroy(pop.font);
    sfSprite_destroy(pop.sprite);
    sfSprite_destroy(pop.back_s);
    sfSprite_destroy(pop.curseur_s);
    sfTexture_destroy(pop.texture);
    sfTexture_destroy(pop.back);
    sfTexture_destroy(pop.curseur);
    sfRenderWindow_destroy(pop.window);
    return (pop);
}

void help(void)
{
    write(1, "\nshot the duck with your mouse kid\n", 37);
    write(1, "more you kill ducks more it goes faster\n", 40);
}

stock_t text_set(stock_t pop)
{
    pop.font = sfFont_createFromFile("arial.ttf");
    pop.text = sfText_create();
    pop.point_string  = sfText_create();
    pop.live_string = sfText_create();
        return (pop);
}

int main(int ac, char **av)
{
    sfEvent event;
    stock_t pop = {0, 0};
    sfVideoMode mode = {1920, 1080, 32};
    sfIntRect rect = {0, 0, 110, 110};

    if (ac == 2 && av[1][1] == 'h') {
        help();
        return (0);
    }
    else {
        pop = sprite_creator(pop);
        pop = text_set(pop);
        pop = texter(pop);
        pop.live = 3;
        pop.point = 0;
        pop.move = pop.position.x -60;
        pop.window = sfRenderWindow_create(mode, "SFML window", sfClose, NULL);
        pop = drawing_the_window(pop, event, rect);
        pop = destroyer(pop);
    } return (0);
}
