/*
** EPITECH PROJECT, 2019
** rand
** File description:
** does the job
*/

#include "stocker.h"

int rand_number(float min, int max)
{
    int result = 0;
    int low = 0;
    int high = 0;

    if (min < max) {
        low = min;
        high = max + 1;
    }
    else {
        low = max + 1;
        high = min;
    }
    result = (rand() % (high - low)) + low;
    return (result);
}
