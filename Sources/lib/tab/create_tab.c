/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

void *create_tab(size_t const size)
{
    void **tab = malloc(sizeof(void *) * (size + 1));

    if (!tab)
        return NULL;
    tab[size] = NULL;
    return tab;
}

void *create_slab(void)
{
    void **tab = malloc(sizeof(void *) * (ALLOC_SIZE + 1));

    if (!tab)
        return NULL;
    tab[0] = NULL;
    return tab;
}
