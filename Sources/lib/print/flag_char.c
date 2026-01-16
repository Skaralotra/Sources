/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"

int flag_char(int const fd, void const *argument)
{
    return dprint_char(fd, *(char *)argument);
}

int flag_str(int const fd, void const *argument)
{
    return dprint_str(fd, argument);
}
