/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_ERROR_H
    #define LIB_ERROR_H

    #define SUCCESS_CODE (0)
    #define ERROR_CODE (84)
    #define ERROR_DATA ((error_data_t []){{__FILE__, __func__, __LINE__}})

    #include <stdbool.h>

typedef struct error_data_s {
    char const *file;
    char const *func;
    int line;
} error_data_t;

typedef struct free_array_s {
    bool condition;
    void *variable;
    void (*function)(void *);
} free_array_t;

int call_error(char const *message, error_data_t const *data);
int error_free(free_array_t *free_array);
int display_error(char const *str);

#endif //LIB_ERROR_H
