/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"

ssize_t dprint_str(int const fd, char const *str)
{
    if (!str)
        return write(fd, "(null)", 6);
    return write(fd, str, str_len(str));
}

ssize_t print_str(char const *str)
{
    return dprint_str(1, str);
}

ssize_t dprint_char(int const fd, char const c)
{
    return write(fd, &c, 1);
}

ssize_t print_char(char const c)
{
    return dprint_char(1, c);
}
