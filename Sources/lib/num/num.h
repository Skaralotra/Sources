/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_NBR_H
    #define LIB_NBR_H

//---IMPORTS---//
    #include <unistd.h>

//---DEFINES---//
    #define IS_NUM(character) ('0' <= character && character <= '9' ? 1 : 0)

//---STRUCTURES---//

//---PROTOTYPES---//
// print_num.c
int print_num(int nb);
int dprint_num(int fd, int nb);
int print_base(int nb, int base);
int dprint_base(int fd, int nb, int base);
// num_len.c
int num_len(int nb);
// convert_str.c
int convert_str(char const *str);
// power.c
int power(int nb, int p);

//### INTERNAL COMPONENTS ###//

#endif //LIB_NBR_H
