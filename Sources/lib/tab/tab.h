/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_TAB_H
    #define LIB_TAB_H

//---IMPORTS---//

//---DEFINES---//

//---TYPES---//

//---PROTOTYPES---//
int tab_len(void const *const *tab);
int dprint_ctab(int fd, char const *const *tab);
int print_ctab(char const *const *tab);
void free_tab(void **tab);

#endif //LIB_TAB_H
