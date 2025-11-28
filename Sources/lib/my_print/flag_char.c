/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "my_print.h"

int flag_char(void *argument)
{
    return (int)write(1, argument, 1);
}
