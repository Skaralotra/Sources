/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"

int flag_decimal(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 10);
}

int flag_hexa(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 16);
}

int flag_octal(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 8);
}

int flag_binary(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 2);
}
