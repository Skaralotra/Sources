/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "tab.h"

Test(print_ctab, standard, .init = cr_redirect_stdout)
{
    char const *const tab[] = {"Hello", "World", NULL};

    cr_assert_eq(print_ctab(tab, ", "), 12);
    cr_assert_stdout_eq_str("Hello, World");
}

Test(print_ctab, null_input, .init = cr_redirect_stdout)
{
    cr_assert_eq(print_ctab(NULL, NULL), 6);
    cr_assert_stdout_eq_str("(null)");
}
