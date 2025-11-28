/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

int display_str(char const *str)
{
    return (int)write(1, str, str_len(str));
}
