/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "num.h"

int type_decimal(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 10);
}

int type_hexa(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 16);
}

int type_octal(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 8);
}

int type_binary(int const fd, void const *argument)
{
    return dprint_base(fd, *(int *)argument, 2);
}
