/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"
#include "str.h"

bool is_integer(char const *str)
{
    if (!str)
        return false;
    for (int i = 0; str[i]; i++)
        if (!(IS_NUM(str[i]) || (!i && str[i] == '-')))
            return false;
    return true;
}

bool is_float(char const *str)
{
    if (!str || count_char(str, '.') != 1)
        return false;
    for (int i = 0; str[i]; i++)
        if (!(IS_NUM(str[i]) || (!i && str[i] == '-') || str[i] == '.'))
            return false;
    return true;
}
