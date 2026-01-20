/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "str.h"

int type_char(int const fd, void const *argument)
{
    return dprint_char(fd, *(char *)argument);
}

int type_str(int const fd, void const *argument)
{
    return dprint_str(fd, argument);
}
