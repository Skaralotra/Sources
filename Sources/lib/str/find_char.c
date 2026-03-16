/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

bool find_char(char const *str, char const chara)
{
    for (int i = 0; str && str[i]; i++)
        if (str[i] == chara)
            return true;
    return false;
}
