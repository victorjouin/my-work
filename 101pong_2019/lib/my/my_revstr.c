/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** return the string
*/

char *my_revstr(char *str)
{
    int N = 0;
    int c = 0;
    char ephemere;
    char *stocker = str;
    int caract = 0;
    
    while (str[c] != '\0') {
        c = c + 1;
    } c = c - 1;
    N = c/2;

    while (c > N) {
        ephemere = stocker[caract];
        str[caract] = stocker[c];
        str[c] = ephemere;
        caract = caract + 1;
        c = c - 1;
    } return (str);
}
