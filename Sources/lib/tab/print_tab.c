/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"
#include "str.h"

ssize_t dprint_ctab(int const fd, char const *const *tab)
{
    ssize_t total_size = 0;
    ssize_t size = 0;
    ssize_t separ = 0;

    if (!tab)
        return dprint_str(fd, "(null)");
    for (int i = 0; tab[i]; i++) {
        size = dprint_str(fd, tab[i]);
        if (tab[i + 1])
            separ = dprint_str(fd, ", ");
        else
            separ = 0;
        if (size < 0 || separ < 0)
            return -1;
        total_size += size + separ;
    }
    return total_size;
}

ssize_t print_ctab(char const *const *tab)
{
    return dprint_ctab(1, tab);
}
