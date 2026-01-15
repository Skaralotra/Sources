/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "error.h"
#include "my_print.h"

int call_error(char *message, error_data_t *data)
{
//printf, dprintf, printi
    my_print(
        "- - - ERROR - - -\n"
        "%s|%s:%d Caught Error : %s"
        "\n- - - - - - - - -\n",
        (void *[]){data->file, data->func, &data->line, message});
    return ERROR_CODE;
}
