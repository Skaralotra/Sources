/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

int str_len(char const *str)
{
    int len = 0;

    if (!str)
        return 0;
    for (; str[len]; len++);
    return len;
}
