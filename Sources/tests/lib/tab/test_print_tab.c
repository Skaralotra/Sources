/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "tab.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(print_ctab, standard, .init = redirect_all_std)
{
    char const *const tab[] = {"Hello", "World", NULL};

    cr_assert_eq(print_ctab(tab), 12);
    cr_assert_stdout_eq_str("Hello, World");
}

Test(print_ctab, null_input, .init = redirect_all_std)
{
    cr_assert_eq(print_ctab(NULL), 6);
    cr_assert_stdout_eq_str("(null)");
}
