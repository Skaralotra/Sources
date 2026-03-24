/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "error.h"

int error_free(size_t const size, free_array_t const free_array[])
{
    bool failed_batch = false;

    if (!free_array)
        return ERROR_CODE;
    for (size_t i = 0; i < size; i++)
        if (!free_array[i].var)
            failed_batch = true;
    if (!failed_batch)
        return SUCCESS_CODE;
    for (size_t i = 0; i < size; i++)
        if (free_array[i].func && free_array[i].var)
            free_array[i].func((void *)free_array[i].var);
    return ERROR_CODE;
}
