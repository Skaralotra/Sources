/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

char *create_str(int size)
{
    char *str = malloc(sizeof(char) * (size + 1));

    if (!str)
        return NULL;
    str[size] = '\0';
    return str;
}
