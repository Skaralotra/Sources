/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

char **create_tab(int size)
{
    char **tab = malloc(sizeof(char *) * (size + 1));

    if (!tab)
        return NULL;
    tab[size] = NULL;
    return tab;
}
