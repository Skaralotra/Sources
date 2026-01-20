/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "error.h"
#include "print.h"

int call_error(char const *message, error_data_t const data[])
{
    dprint(2, "- - - ERROR - - -\n"
        "%s|%s:%d Caught Error : %s\n"
        "- - - - - - - - -\n",
        (ARGS){data->file, data->func, &data->line, message});
    return ERROR_CODE;
}
