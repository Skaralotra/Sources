/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "../str/str.h"
#include "error.h"

int call_error(char *message)
{
    display_error(message);
    return ERROR_CODE;
}
