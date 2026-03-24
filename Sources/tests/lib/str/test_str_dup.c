/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "str.h"

Test(str_dup, standard)
{
    char *str = str_dup("Hello World");

    cr_assert_str_eq(str, "Hello World");
    free(str);
}

Test(str_dup, null_input, .init = cr_redirect_stderr)
{
    char *str = str_dup(NULL);

    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/str/str_dup.c|str_dup:17 Caught Error : NULL Argument\n"
        "- - - - - - - - -\n");
    cr_assert_null(str);
}

Test(str_ndup, standard)
{
    char *str = str_ndup("Hello World", 5);

    cr_assert_str_eq(str, "Hello");
    free(str);
}

Test(str_ndup, bad_size)
{
    char *str = str_ndup("Hello World", 15);

    cr_assert_str_eq(str, "Hello World");
    free(str);
}

Test(str_ndup, null_input, .init = cr_redirect_stderr)
{
    char *str = str_ndup(NULL, 15);

    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/str/str_dup.c|str_ndup:32 Caught Error : NULL Argument\n"
        "- - - - - - - - -\n");
    cr_assert_null(str);
}
