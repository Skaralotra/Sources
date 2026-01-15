/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "../str/str.h"

int display_error(char const *str)
{
    if (!str)
        return (int)write(2, "(null)", 6);
    return (int)write(2, str, str_len(str));
}
