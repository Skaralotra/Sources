/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"
#include "error.h"

void resize_tab(void *tab, size_t const new_size)
{
    size_t const size = tab_len(*(void ***)tab);
    void **new_tab = malloc(sizeof(void *) * (new_size + 1));

    if (!*(void ***)tab || !new_tab)
        return call_warning("NULL Slab", ERROR_DATA);
    for (size_t i = 0; i < size && i < new_size; i++)
        new_tab[i] = (*(void ***)tab)[i];
    new_tab[new_size] = NULL;
    free(*(void ***)tab);
    *(void ***)tab = new_tab;
}
