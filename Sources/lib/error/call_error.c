/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "error.h"
#include "print.h"

static void print_error(char const *message, error_data_t const data[])
{
    dprint(2, "- - - ERROR - - -\n"
        "%s|%s:%d Caught Error : %s\n"
        "- - - - - - - - -\n",
        (args_t){data->file, data->func, NUM(data->line), message});
}

int call_error(char const *message, error_data_t const data[])
{
    print_error(message, data);
    return ERROR_CODE;
}

int call_ierror(int const code, char const *message, error_data_t const data[])
{
    print_error(message, data);
    return code;
}

void *call_nerror(char const *message, error_data_t const data[])
{
    print_error(message, data);
    return NULL;
}

void call_warning(char const *message, error_data_t const data[])
{
    dprint(2, "%s|%s:%d Warning : %s\n", (args_t)
        {data->file, data->func, NUM(data->line), message});
}
