/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "tab.h"

char **resize_ctab(char **tab, size_t const new_size)
{
    size_t const size = ctab_len((char const *const *)tab);
    char **new_tab = malloc(sizeof(char *) * (new_size + 1));

    if (!tab || !new_tab)
        return NULL;
    for (size_t i = 0; i < size && i < new_size; i++)
        new_tab[i] = tab[i];
    new_tab[new_size] = NULL;
    free(tab);
    return new_tab;
}
