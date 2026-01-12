/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_TAB_H
    #define LIB_TAB_H

    #include "define.h"
    #include "../str/str.h"
    #include <stdlib.h>

int tab_len(char *const *tab);
int display_tab(char *const *tab);
char **create_tab(int size);
char **concat_tab(char **tab, char *element);
void free_tab(char **tab);

#endif //LIB_TAB_H
