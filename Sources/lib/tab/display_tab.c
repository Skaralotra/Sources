/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "tab.h"

int display_tab(char *const *tab) {
    int total_len = 0;

    for (int word = 0; tab[word]; word++) {
        total_len += display_str(tab[word]);
        total_len += display_str(" ");
    }
    return total_len;
}
