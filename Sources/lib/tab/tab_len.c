/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

int tab_len(char *const *tab)
{
    int len = 0;

    for (; tab[len]; len++);
    return len;
}
