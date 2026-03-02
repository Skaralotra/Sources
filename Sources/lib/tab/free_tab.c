/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

void free_tab(void *tab)
{
    if (!tab)
        return;
    for (int i = 0; ((void **)tab)[i]; i++)
        free(((void **)tab)[i]);
    free(tab);
}
