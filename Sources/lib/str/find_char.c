/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

bool find_char(char const *str, char const chara)
{
    if (!str)
        return false;
    for (size_t i = 0; str[i]; i++)
        if (str[i] == chara)
            return true;
    return false;
}

size_t count_char(char const *str, char const chara)
{
    size_t count = 0;

    if (!str)
        return count;
    for (size_t i = 0; str[i]; i++)
        if (str[i] == chara)
            count++;
    return count;
}

bool valid_char(char const *str, char const *valid_chars)
{
    if (!str || !valid_chars)
        return false;
    for (size_t i = 0; str[i]; i++)
        if (!find_char(valid_chars, str[i]))
            return false;
    return true;
}

void replace_char(char *str, char const old_char, char const new_char)
{
    if (!str)
        return;
    for (size_t i = 0; str[i]; i++)
        if (str[i] == old_char)
            str[i] = new_char;
}
