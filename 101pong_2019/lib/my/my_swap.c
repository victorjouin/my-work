/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** switch a and b's adresse
*/


void my_swap(int *a, int *b)
{
    int c = 2;

    c = *a;
    *a = *b;
    *b = c;
}
