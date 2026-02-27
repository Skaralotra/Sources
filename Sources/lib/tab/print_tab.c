/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "tab.h"

ssize_t dprint_ctab(int const fd, char const *const *tab, char const separ[])
{
    ssize_t total_size = 0;
    ssize_t size = 0;
    ssize_t separ_size = 0;

    if (!tab)
        return dprint_str(fd, "(null)");
    for (int i = 0; tab[i]; i++) {
        size = dprint_str(fd, tab[i]);
        if (tab[i + 1])
            separ_size = dprint_str(fd, separ);
        else
            separ_size = 0;
        if (size < 0 || separ_size < 0)
            return -1;
        total_size += size + separ_size;
    }
    return total_size;
}

ssize_t print_ctab(char const *const *tab, char const separ[])
{
    return dprint_ctab(1, tab, separ);
}
