/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"
#include "tab.h"

cslab_t append_ctab(cslab_t tab, char **elements)
{
    size_t tab_len = ctab_len((char const *const *)tab);
    size_t elem_len = ctab_len((char const *const *)elements);

    if (tab_len + elem_len > MAX_SIZE(tab_len))
        tab = resize_ctab(tab, MAX_SIZE(tab_len + elem_len));
    if (!tab || !elements)
        return NULL;
    for (size_t i = 0; i < elem_len; i++)
        tab[tab_len + i] = elements[i];
    tab[tab_len + elem_len] = NULL;
    return tab;
}
