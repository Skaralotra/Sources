/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_STR_H
    #define LIB_STR_H

//---IMPORTS---//
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>

//---DEFINES---//
    #define STR_END (0)

//---STRUCTURES---//

//---PROTOTYPES---//
// print.c
int print_str(char const *str);
int dprint_str(int fd, char const *str);
int print_char(char c);
int dprint_char(int fd, char c);
// str_len.c
int str_len(char const *str);
// str_dup.c
char *str_dup(char const *str);
// concat_str.c
char *concat_str(char *str1, char const *str2, bool do_free);
// str_identical.c
bool str_identical(char const *str1, char const *str2);

//### INTERNAL COMPONENTS ###//

#endif //LIB_STR_H
