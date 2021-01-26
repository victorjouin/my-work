/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** displays the nb with his power
*/


int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    } if (p < 0) {
        return (0);
    } else {
        nb = nb * my_compute_power_rec(nb ,p - 1);
        return (nb);
    } if (nb > 2147483647) {
        return (0);
    }
}
