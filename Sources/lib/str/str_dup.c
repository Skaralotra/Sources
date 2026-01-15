/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

char *str_dup(char const *str)
{
    unsigned const len = str_len(str);
    char *str_dup;

    if (!str)
        return NULL;
    str_dup = malloc(sizeof(char) * (len + 1));
    if (!str_dup)
        return NULL;
    for (int i = 0; i <= len; i++)
        str_dup[i] = str[i];
    return str_dup;
}
