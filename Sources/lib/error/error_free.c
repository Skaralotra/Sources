/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
** Syntax Example :
**     if (error_free((free_array_t []){
**        {!array1, array1, &free},
**        {!array2, array2, &free},
**        {!array3, array3, &free},
**        {NULL, NULL, NULL}}))
**        return call_error("Malloc Failed Main");
*/

#include "error.h"

int error_free(free_array_t *free_array)
{
    bool failed_batch = false;

    if (!free_array)
        return ERROR_CODE;
    for (int i = 0; free_array[i].function; i++)
        if (free_array[i].condition)
            failed_batch = true;
    if (!failed_batch)
        return SUCCESS_CODE;
    for (int i = 0; free_array[i].function; i++)
        if (!free_array[i].condition)
            free_array[i].function(free_array[i].variable);
    return ERROR_CODE;
}
