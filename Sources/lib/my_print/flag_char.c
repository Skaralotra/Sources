/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "my_print.h"

int flag_char(void const *argument)
{
    return (int)write(1, argument, 1);
}

int flag_str(void const *argument)
{
    return display_str(argument);
}
