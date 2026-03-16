/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "num.h"

ssize_t type_decimal(int const fd, void const *argument)
{
    return dprint_base(fd, (long)argument, 10);
}

ssize_t type_hexa(int const fd, void const *argument)
{
    return dprint_base(fd, (long)argument, 16);
}

ssize_t type_octal(int const fd, void const *argument)
{
    return dprint_base(fd, (long)argument, 8);
}

ssize_t type_binary(int const fd, void const *argument)
{
    return dprint_base(fd, (long)argument, 2);
}
