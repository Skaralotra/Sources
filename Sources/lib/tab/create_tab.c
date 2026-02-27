/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

char **create_ctab(size_t const size)
{
    char **tab = malloc(sizeof(char *) * (size + 1));

    if (!tab)
        return NULL;
    tab[size] = NULL;
    return tab;
}

cslab_t create_cslab(void)
{
    cslab_t tab = malloc(sizeof(char *) * (ALLOC_SIZE + 1));

    if (!tab)
        return NULL;
    *tab = NULL;
    return tab;
}
