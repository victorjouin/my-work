/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** displays the factorial
*/

int my_compute_factorial_it(int b)
{
    int c = 1;
    if (b > 12)
        c = 0;
    while (b > 0) {
        c = c * b;
        b = b - 1;
    } if (b < 0) {
        c = 0;
    } return (c);
}
