/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** return the square
*/

int my_compute_square_root(int nb)
{
    int counter = 1;
    int stocker = 1;

    while (counter != nb) {
        counter = stocker * stocker;
        if (counter > nb) {
            return (1);
        } stocker = stocker + 1;
    } return (stocker - 1);
}
