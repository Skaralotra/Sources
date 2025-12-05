/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_STR_H
    #define LIB_STR_H

    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>

int str_len(char const *str);
char *create_str(int size);
int display_str(char const *str);
int display_error(char const *str);
char *concat_str(char *str1, char *str2);
void concat_stack(char *dest, char *str1, char *str2);
bool str_identical(char const *str1, char const *str2);

#endif //LIB_STR_H
