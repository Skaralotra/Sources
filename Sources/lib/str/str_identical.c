/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

bool str_identical(char const *str1, char const *str2)
{
    int i = 0;

    if (!str1 || !str2)
        return 0;
    for (; str1[i] && str2[i]; i++)
        if (str1[i] != str2[i])
            return false;
    if (str1[i] || str2[i])
        return false;
    return true;
}
