/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count the number of caracters
*/

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        n = n + 1;
    } return (n);
}
