/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

void *append_slab(void *slab, void *element)
{
    size_t const slab_len = tab_len(slab);

    if (slab_len + 1 > MAX_SIZE(slab_len))
        slab = resize_tab(slab, MAX_SIZE(slab_len + 1));
    if (!slab)
        return NULL;
    ((void **)slab)[slab_len] = element;
    ((void **)slab)[slab_len + 1] = NULL;
    return slab;
}

void *extend_slab(void *slab, void *elements)
{
    size_t const slab_len = tab_len(slab);
    size_t const elem_len = tab_len(elements);

    if (slab_len + elem_len > MAX_SIZE(slab_len))
        slab = resize_tab(slab, MAX_SIZE(slab_len + elem_len));
    if (!slab || !elements)
        return NULL;
    for (size_t i = 0; i < elem_len; i++)
        ((void **)slab)[slab_len + i] = ((void **)elements)[i];
    ((void **)slab)[slab_len + elem_len] = NULL;
    return slab;
}