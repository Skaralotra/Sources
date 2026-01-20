/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "error.h"

int error_free(free_array_t free_array[])
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
