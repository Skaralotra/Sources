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
    char *str_dup = malloc(sizeof(char) * (len + 1));

    if (!str || !str_dup)
        return NULL;
    for (unsigned i = 0; i <= len; i++)
        str_dup[i] = str[i];
    return str_dup;
}

char *str_ndup(char const *str, size_t const size)
{
    size_t len = 0;
    char *str_dup = malloc(sizeof(char) * (size + 1));

    if (!str || !str_dup)
        return NULL;
    for (; str[len] && len < size; len++)
        str_dup[len] = str[len];
    str_dup[len] = STR_END;
    return str_dup;
}
