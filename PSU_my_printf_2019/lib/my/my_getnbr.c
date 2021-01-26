/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
**
*/

float underpoint(int in, float num, char *str)
{
    while (str[in] != '\0') {
        num = (str[in] - '0');
        num *= 0.1;
        in++;
    }
    return (num);
}

float my_getnbr(char *str)
{
    int in = 0;
    float num = 0.00;

    if (str[0] == '-' && str[1] != '\0') {
        in++;
    }
    while (str[in] != '\0') {
        if ((str[in] < 48 || str[in] > 57))
                break;
        num = num + str[in] - '0';
        num *= 10;
        in++;
    }
    if (str[in] == '.') {
            num = num + underpoint(in, num, str);
        }
    num /= 10;
    if (str[0] == '-')
        return (-1 * num);
    else
        return (num);
}


