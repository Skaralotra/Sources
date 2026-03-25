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
    #include <stdbool.h>

//---DEFINES---//
    #define IS_NUM(character) ('0' <= character && character <= '9')

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;

//---PROTOTYPES---//
// print_num.c
ssize_t print_num(long long nbr);
ssize_t dprint_num(int fd, long long nbr);
ssize_t print_base(long long nbr, int base);
ssize_t dprint_base(int fd, long long nbr, int base);
// num_len.c
size_t num_len(int nbr);
// get_num.c
ssize_t get_num(char const *str);
// is_numerical.c
bool is_integer(char const *str);
bool is_float(char const *str);
// power.c
ssize_t power(ssize_t nbr, ssize_t pow);

//### INTERNAL COMPONENTS ###//

#endif //LIB_NBR_H
