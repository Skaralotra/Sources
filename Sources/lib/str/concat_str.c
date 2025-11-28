/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

char *concat_str(char *str1, char *str2)
{
    int len1 = str_len(str1);
    int len2 = str_len(str2);
    char *concat = create_str(len1 + len2 + 1);

    for (int i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (int i = 0; i < len2; i++)
        concat[i + len1] = str2[i];
    free(str1);
    return concat;
}
