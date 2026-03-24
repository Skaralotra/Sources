/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"
#include "error.h"

void append_slab(void *slab, void *element)
{
    size_t slab_len;

    if (!slab)
        return call_warning("NULL Pointer", ERROR_DATA);
    slab_len = tab_len(*(void ***)slab);
    if (slab_len + 1 > MAX_SIZE(slab_len))
        resize_tab(slab, MAX_SIZE(slab_len + 1));
    if (!*(void ***)slab)
        return call_warning("NULL Slab", ERROR_DATA);
    if (!element)
        call_warning("NULL Element", ERROR_DATA);
    (*(void ***)slab)[slab_len] = element;
    (*(void ***)slab)[slab_len + 1] = NULL;
}

void extend_slab(void *slab, void *elements)
{
    size_t slab_len;
    size_t elem_len = tab_len(elements);

    if (!slab)
        return call_warning("NULL Pointer", ERROR_DATA);
    slab_len = tab_len(*(void ***)slab);
    if (slab_len + elem_len > MAX_SIZE(slab_len))
        resize_tab(slab, MAX_SIZE(slab_len + elem_len));
    if (!*(void ***)slab)
        return call_warning("NULL Slab", ERROR_DATA);
    if (!elements)
        return call_warning("NULL Elements", ERROR_DATA);
    for (size_t i = 0; i < elem_len; i++)
        (*(void ***)slab)[slab_len + i] = ((void **)elements)[i];
    (*(void ***)slab)[slab_len + elem_len] = NULL;
}
