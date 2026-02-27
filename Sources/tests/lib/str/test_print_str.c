/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "str.h"

Test(print_str, standard, .init = cr_redirect_stdout)
{
    cr_assert_eq(print_str("Hello World"), 11);
    cr_assert_stdout_eq_str("Hello World");
}

Test(print_str, null_input, .init = cr_redirect_stdout)
{
    cr_assert_eq(print_str(NULL), 6);
    cr_assert_stdout_eq_str("(null)");
}

Test(print_char, standard, .init = cr_redirect_stdout)
{
    cr_assert_eq(print_char('A'), 1);
    cr_assert_stdout_eq_str("A");
}
