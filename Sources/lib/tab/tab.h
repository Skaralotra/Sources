/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef LIB_TAB_H
    #define LIB_TAB_H

//---IMPORTS---//
    #include <stdlib.h>

//---DEFINES---//

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;

//---PROTOTYPES---//
// tab_len.c
ssize_t ctab_len(char const *const *tab);
// print_tab.c
ssize_t dprint_ctab(int fd, char const *const *tab);
ssize_t print_ctab(char const *const *tab);
// free_tab.c
void free_ctab(char **tab);
// resize_tab.c
char **resize_ctab(char **tab, size_t const new_size);

#endif //LIB_TAB_H
