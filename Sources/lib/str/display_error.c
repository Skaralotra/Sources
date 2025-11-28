/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

int display_error(char const *str)
{
    return (int)write(2, str, str_len(str));
}
