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
    size_t size;
    void **new_tab = malloc(sizeof(void *) * (new_size + 1));

    if (!tab)
        return call_warning("NULL Pointer", ERROR_DATA);
    size = tab_len(*(void ***)tab);
    if (!*(void ***)tab || !new_tab)
        return call_warning("NULL Tab", ERROR_DATA);
    for (size_t i = 0; i < size && i < new_size; i++)
        new_tab[i] = (*(void ***)tab)[i];
    new_tab[new_size] = NULL;
    free(*(void ***)tab);
    *(void ***)tab = new_tab;
}
