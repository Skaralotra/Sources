/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

    if (error_free((free_array_t []){
        {!array1, array1, &free},
        {!array2, array2, &free},
        {!array3, array3, &free},
        {NULL, NULL, NULL}}))
        return call_error("error message", ERROR_DATA);

*** Syntax Example **/

#ifndef LIB_ERROR_H
    #define LIB_ERROR_H

    #define SUCCESS_CODE (0)
    #define ERROR_CODE (84)
    #define ERROR_DATA (error_data_t []){{__FILE__, __FUNCTION__, __LINE__}}

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

#endif //LIB_ERROR_H
