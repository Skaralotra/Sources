/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

char *concat_str(char *str1, char const *str2, bool const do_free)
{
    int const len1 = str_len(str1);
    int const len2 = str_len(str2);
    char *concat = malloc(sizeof(char) * (len1 + len2 + 1));

    if (!concat)
        return NULL;
    for (int i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (int i = 0; i <= len2; i++)
        concat[i + len1] = str2[i];
    if (do_free)
        free(str1);
    return concat;
}
