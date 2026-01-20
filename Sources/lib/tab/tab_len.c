/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

int tab_len(void const *const *tab)
{
    int len = 0;

    for (; tab[len]; len++);
    return len;
}
