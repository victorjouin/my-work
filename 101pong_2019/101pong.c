/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void angle(char **av, float x, float y, float z, int t)
{
    float norm_vec1 = sqrt((x * x) + (y * y) + (z * z));
    float angle = fabs((180/M_PI) * (asin(z / norm_vec1)));
    int x0 = atof(av[1]);
    int x1 = atof(av[4]);
    
    
    if (angle <= 0 && angle > 90)
        printf("The ball won't reach the paddle.\n");
    if (x0 > 0 & (x0 - x1) < 0 || x0 < 0 && (x0 - x1) > 0)
        printf("The ball won't reach the paddle.\n");
    else {
        printf("The incidence angle is:\n%.2f degrees\n",angle);
    }
}

void arrived(char **av,float x, float y, float z, int t)
{
    float x1 = x * t + atof(av[4]);
    float y1 = y * t + atof(av[5]);
    float z1 = z * t + atof(av[6]);
        
    printf("At time t + %d, ball coordinates will be:\n", t);
    printf("(%.2f, %.2f, %.2f)\n", x1, y1, z1);
}

int rst_position(char **av)
{
    float x = atof(av[4]) - atof(av[1]);
    float y = atof(av[5]) - atof(av[2]);
    float z = atof(av[6]) - atof(av[3]);
    int t = atof(av[7]);

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
 
    arrived(av, x, y, z, t);
    angle(av, x, y, z, t);
    return (0);
}

int main(int ac, char **av)
{
    if (atof(av[7]) < 0)
        return (84);
    if (ac > 8)
        return (84);
    if (ac < 8)
        return (84);
    if ((atof(av[6]) - atof(av[3])) == 0)
        return (84);
    rst_position(av);
    return (0);
}
