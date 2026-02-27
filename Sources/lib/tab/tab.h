/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

    cslab_t tab = create_cslab();

    tab = append_ctab(tab, (char *[]){"Hello", "World", NULL});

*** Syntax Example **/

#ifndef LIB_TAB_H
    #define LIB_TAB_H

//---IMPORTS---//
    #include <stdlib.h>

//---DEFINES---//
    #define ALLOC_SIZE (3)
    #define ROUND(value) (((value) % ALLOC_SIZE) != 0 || !(value))
    #define MAX_SIZE(value) (((value) / ALLOC_SIZE + ROUND(value)) * ALLOC_SIZE)

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;
typedef char **cslab_t;

//---PROTOTYPES---//
// create_tab.c
char **create_ctab(size_t size);
cslab_t create_cslab(void);
// tab_len.c
ssize_t ctab_len(char const *const *tab);
// print_tab.c
ssize_t dprint_ctab(int fd, char const *const *tab, char const separ[]);
ssize_t print_ctab(char const *const *tab, char const separ[]);
// free_tab.c
void free_ctab(char **tab);
// resize_tab.c
char **resize_ctab(char **tab, size_t new_size);
// append_tab.c
cslab_t append_ctab(cslab_t tab, char **elements);

#endif //LIB_TAB_H
