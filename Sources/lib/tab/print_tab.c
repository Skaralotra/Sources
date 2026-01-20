/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "tab.h"

int dprint_ctab(int const fd, char const *const *tab)
{
    int char_total = 0;

    if (!tab)
        return dprint_str(fd, "(null)");
    for (int i = 0; tab[i]; i++) {
        char_total += dprint_str(fd, tab[i]);
        if (tab[i + 1])
            char_total += dprint_str(fd, ", ");
    }
    return char_total;
}

int print_ctab(char const *const *tab)
{
    return dprint_ctab(1, tab);
}