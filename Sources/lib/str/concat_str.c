/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "error.h"

char *concat_str(char const *str1, char const *str2)
{
    size_t const len1 = str_len(str1);
    size_t const len2 = str_len(str2);
    char *concat = NULL;

    if (!str1 || !str2)
        return call_nerror("NULL Argument", ERROR_DATA);
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!concat)
        return call_nerror("Malloc Failed", ERROR_DATA);
    for (size_t i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (size_t i = 0; i <= len2; i++)
        concat[i + len1] = str2[i];
    return concat;
}
