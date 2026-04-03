/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "str.h"

Test(clean_mixed, clean_standard)
{
    char str[] = "---Hello---World---";

    clean_mixed(str, "-");
    cr_assert_str_eq(str, "Hello World");
}

Test(clean_mixed, clean_mix)
{
    char str[] = "32112-Hello-312213-World-132231";

    clean_mixed(str, "-123");
    cr_assert_str_eq(str, "Hello World");
}

Test(clean_mixed, clean_null_str, .init = cr_redirect_stderr)
{
    clean_mixed(NULL, "-");
    cr_assert_stderr_eq_str(
        "./lib/str/clean_str.c|clean_mixed:28 Warning : NULL Argument\n");
}

Test(clean_mixed, clean_null_mix, .init = cr_redirect_stderr)
{
    clean_mixed("---Hello---World---", NULL);
    cr_assert_stderr_eq_str(
        "./lib/str/clean_str.c|clean_mixed:28 Warning : NULL Argument\n");
}
