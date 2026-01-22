/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

int dprint_str(int const fd, char const *str)
{
    if (!str)
        return (int)write(fd, "(null)", 6);
    return (int)write(fd, str, str_len(str));
}

int print_str(char const *str)
{
    return dprint_str(1, str);
}

int dprint_char(int const fd, char const c)
{
    return (int)write(fd, &c, 1);
}

int print_char(char const c)
{
    return dprint_char(1, c);
}
