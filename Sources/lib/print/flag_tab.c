/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "tab.h"

ssize_t type_char_tab(int const fd, void const *argument)
{
    return dprint_ctab(fd, *(char const ***)argument);
}
