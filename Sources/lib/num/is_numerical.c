/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

bool is_numerical(char const *str)
{
    if (!str)
        return false;
    for (int i = 0; str[i]; i++)
        if (!(IS_NUM(str[i]) || (!i && str[i] == '-')))
            return false;
    return true;
}
