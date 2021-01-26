/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
**
*/

long long int my_getsnbr(char const *str)
{
    long long int nb = 0;
    long long int counter = 0;

    while (str[counter] != '\0')
    {
        if (str[counter] == '-')
            counter++;
        if (str[counter] >= '0' && str[counter] <= '9') {
            nb *= 10;
            nb += str[counter] - '0';
        }
        else {
            return (nb);
        }
        counter++;
    }
    nb = -1 * nb;
    return (nb);
}

