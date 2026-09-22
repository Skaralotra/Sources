/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

size_t tab_len(void *tab)
{
    ssize_t len = 0;

    if (!tab)
        return 0;
    for (; ((void **)tab)[len]; len++);
    return len;
}
