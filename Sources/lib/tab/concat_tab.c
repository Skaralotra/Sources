/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

char **concat_tab(char **tab, char *element)
{
    char **replacement = malloc(sizeof(char *) * (tab_len(tab) + 2));
    int i = 0;

    if (replacement == NULL)
        return NULL;
    for (; tab[i]; i++) {
        replacement[i] = tab[i];
    }
    replacement[i] = element;
    replacement[i + 1] = NULL;
    free(tab);
    return replacement;
}
