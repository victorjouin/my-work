/*
** EPITECH PROJECT, 2019
** testuni
** File description:
** jjd
*/

#include<criterion/criterion.h>

Test( 101pong, the_pong)
{
    cr_assert_str_eq(rst_position(1 2 3 2 4 6 2), "The velocity vector of the ball is:\n(1.00 ,2.00 ,3.00)\nAt time t + 2 ball coordinates will be:\n(2.00 , 4.00 ,6.00)\nThe ball won’t reach the paddle."
}
