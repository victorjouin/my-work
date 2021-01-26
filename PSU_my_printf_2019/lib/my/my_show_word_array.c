/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** displays array  
*/

int my_show_word_array(char * const *tab)
{
    int counter = 0;
    
    while (tab[counter] != '\0') {
        my_putstr(tab[counter]);
        counter++;
        my_putchar('\n');
    }       
}
