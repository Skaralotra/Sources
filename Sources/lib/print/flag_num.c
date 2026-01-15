/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"

int flag_decimal(void const *argument)
{
    return display_base(*(int *)argument, 10);
}

int flag_hexa(void const *argument)
{
    return display_base(*(int *)argument, 16);
}

int flag_octal(void const *argument)
{
    return display_base(*(int *)argument, 8);
}

int flag_binary(void const *argument)
{
    return display_base(*(int *)argument, 2);
}
