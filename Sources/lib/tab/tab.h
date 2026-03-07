/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

    char **slab = create_slab();

    append_slab(&slab, "Hello");
    extend_slab(&slab, (args_t){"World", "Puppy", "Kitty", NULL});
    print("slab : %t\n", (args_t){slab});
    free(slab);

*** Syntax Example **/

#ifndef LIB_TAB_H
    #define LIB_TAB_H

//---IMPORTS---//
    #include <stdlib.h>

//---DEFINES---//
    #define ALLOC_SIZE (25)
    #define ROUND(value) (((value) % ALLOC_SIZE) != 0 || !(value))
    #define MAX_SIZE(value) (((value) / ALLOC_SIZE + ROUND(value)) * ALLOC_SIZE)

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;
typedef void const *args_t[];

//---PROTOTYPES---//
// create_tab.c
void *create_tab(size_t size);
void *create_slab(void);
// tab_len.c
ssize_t tab_len(void *tab);
// print_tab.c
ssize_t dprint_ctab(int fd, char const *const *tab, char const separ[]);
ssize_t print_ctab(char const *const *tab, char const separ[]);
// resize_tab.c
void resize_tab(void *tab, size_t new_size);
// insert_slab.c
void append_slab(void *slab, void *element);
void extend_slab(void *slab, void *elements);
// free_tab.c
void free_tab(void *tab);

#endif //LIB_TAB_H
