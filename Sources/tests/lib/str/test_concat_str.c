/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "str.h"

Test(concat_str, standard_concat)
{
    char *concat = concat_str("Hello", "World");

    cr_assert_str_eq(concat, "HelloWorld");
    free(concat);
}

Test(concat_str, null_input, .init = cr_redirect_stderr)
{
    char *concat = concat_str("Hello", NULL);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/str/concat_str.c|concat_str:18 Caught Error : NULL Argument\n"
        "- - - - - - - - -\n");
    cr_assert_null(concat);
}
