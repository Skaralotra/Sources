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
    #define STR_END ('\0')
    #define LOW_DIFF ('a' - 'A')
    #define IS_LETTER(cha) ('a' <= LOWER(cha) && LOWER(cha) <= 'z')
    #define LOWER(cha) ('A' <= cha && cha <= 'Z' ? (char)(cha + LOW_DIFF) : cha)

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;

//---PROTOTYPES---//
// print.c
ssize_t print_str(char const *str);
ssize_t dprint_str(int fd, char const *str);
ssize_t print_char(char c);
ssize_t dprint_char(int fd, char c);
// str_len.c
size_t str_len(char const *str);
// str_dup.c
char *str_dup(char const *str);
char *str_ndup(char const *str, size_t size);
// concat_str.c
char *concat_str(char const *str1, char const *str2);
// str_identical.c
bool str_identical(char const *str1, char const *str2);
bool str_nidentical(char const *str1, char const *str2, size_t len);
// find_char.c
bool find_char(char const *str, char chara);
// separate_str.c
char **separate_str(char const *str, char const *separator);
// check_format.c
//bool check_format(char const *format, char const *str);

//### INTERNAL COMPONENTS ###//

#endif //LIB_STR_H
