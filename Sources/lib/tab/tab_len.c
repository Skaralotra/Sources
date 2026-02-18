/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

ssize_t ctab_len(char const *const *tab)
{
    ssize_t len = 0;

    if (!tab)
        return 0;
    for (; tab[len]; len++);
    return len;
}
