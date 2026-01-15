/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_NBR_H
    #define LIB_NBR_H

    #define IS_NUM(character) ('0' <= character && character <= '9' ? 1 : 0)

    #include <unistd.h>

int nbr_len(unsigned nb);
int convert_str(char const *str);
int display_base(int nb, int base);
int display_nbr(int nb);
int power(int nb, int p);

#endif //LIB_NBR_H
