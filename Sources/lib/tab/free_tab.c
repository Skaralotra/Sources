/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}
