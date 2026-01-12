/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_ERROR_H
    #define LIB_ERROR_H

    #include <stdbool.h>

typedef struct free_array_s {
    bool condition;
    void *variable;
    void (*function)(void *);
} free_array_t;

int call_error(char *message);
int error_free(free_array_t *free_array);

#endif //LIB_ERROR_H
