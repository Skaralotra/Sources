/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

if (error_free(3, (free_array_t []){
    {!array1, array1, &free},
    {!array2, array2, &free},
    {!array3, array3, &free}}))
    return call_error("error message", ERROR_DATA);

*** Syntax Example **/

#ifndef LIB_ERROR_H
    #define LIB_ERROR_H

//---IMPORTS---//
    #include <stdbool.h>

//---DEFINES---//
    #define SUCCESS_CODE (0)
    #define ERROR_CODE (84)
    #define ERROR_DATA (error_data_t []){{__FILE__, __FUNCTION__, __LINE__}}

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;

typedef struct error_data_s {
    char const *file;
    char const *func;
    int line;
} error_data_t;

typedef struct free_array_s {
    bool condition;
    void *var;
    void (*func)(void *);
} free_array_t;

//---PROTOTYPES---//
// call_error.c
int call_error(char const *message, error_data_t const data[]);
int call_ierror(int const code, char const *message, error_data_t const data[]);
void *call_nerror(char const *message, error_data_t const data[]);
void call_warning(char const *message, error_data_t const data[]);
// error_free.c
int error_free(size_t size, free_array_t const free_array[]);

//### INTERNAL COMPONENTS ###//

#endif //LIB_ERROR_H
