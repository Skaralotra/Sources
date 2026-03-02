/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

void *resize_tab(void *tab, size_t const new_size)
{
    size_t const size = tab_len(tab);
    void **new_tab = malloc(sizeof(void *) * (new_size + 1));

    if (!tab || !new_tab)
        return NULL;
    for (size_t i = 0; i < size && i < new_size; i++)
        new_tab[i] = ((void **)tab)[i];
    new_tab[new_size] = NULL;
    free(tab);
    return new_tab;
}
