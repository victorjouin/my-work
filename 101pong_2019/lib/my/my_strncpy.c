/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** displays string count
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int c = 0;

    while (src[c] != '\0') {
        c = c + 1;
    }
    while (i != n) {
        dest[i] = src[i];
        i = i + 1;
        if (i == c) {
            dest[i] = '\0';
        }
    } return (dest);
}
