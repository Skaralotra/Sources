/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "my_print.h"

int flag_decimal(void *argument)
{
    return display_base(*(int *)argument, 10);
}

int flag_hexa(void *argument)
{
    return display_base(*(int *)argument, 16);
}

int flag_octal(void *argument)
{
    return display_base(*(int *)argument, 8);
}

int flag_binary(void *argument)
{
    return display_base(*(int *)argument, 2);
}
