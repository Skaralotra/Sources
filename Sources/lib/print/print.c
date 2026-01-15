/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"

int print(char const *format, void const *args[])
{
    return dprint(1, format, args);
}
