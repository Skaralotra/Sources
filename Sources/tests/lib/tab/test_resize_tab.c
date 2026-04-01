/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "tab.h"

Test(resize_tab, standard_resize)
{
    size_t const size = 5;
    size_t const new_size = size + 3;
    char **tab = create_tab(size);

    tab[0] = "Hello";
    tab[1] = "World";
    tab[2] = "Puppy";
    cr_assert_null(tab[size]);
    cr_assert_eq(resize_tab(&tab, new_size), 0);
    cr_assert_str_eq(tab[0], "Hello");
    cr_assert_str_eq(tab[1], "World");
    cr_assert_str_eq(tab[2], "Puppy");
    cr_assert_null(tab[new_size]);
    free(tab);
}

Test(resize_tab, resize_NULL_pointer, .init = cr_redirect_stderr)
{
    size_t const new_size = 5;

    cr_assert_eq(resize_tab(NULL, new_size), 84);
    cr_assert_stderr_eq_str(
    "- - - ERROR - - -\n"
    "./lib/tab/resize_tab.c|resize_tab:17 Caught Error : NULL Tab\n"
    "- - - - - - - - -\n");
}

Test(resize_tab, resize_NULL_tab, .init = cr_redirect_stderr)
{
    size_t const new_size = 5;
    char **tab = NULL;

    cr_assert_eq(resize_tab(&tab, new_size), 84);
    cr_assert_stderr_eq_str(
    "- - - ERROR - - -\n"
    "./lib/tab/resize_tab.c|resize_tab:17 Caught Error : NULL Tab\n"
    "- - - - - - - - -\n");
}
