/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "str.h"

Test(separate_str, standard)
{
    char **separated = separate_str("Hello World Puppy Kitty", " ");

    cr_assert_str_eq(separated[0], "Hello");
    cr_assert_str_eq(separated[1], "World");
    cr_assert_str_eq(separated[2], "Puppy");
    cr_assert_str_eq(separated[3], "Kitty");
    cr_assert_null(separated[4]);
    free(separated);
}

Test(separate_str, multi_character_separator)
{
    char **separated = separate_str("Hello>:3World>:3Puppy>:3Kitty", ">:3");

    cr_assert_str_eq(separated[0], "Hello");
    cr_assert_str_eq(separated[1], "World");
    cr_assert_str_eq(separated[2], "Puppy");
    cr_assert_str_eq(separated[3], "Kitty");
    cr_assert_null(separated[4]);
    free(separated);
}

Test(separate_str, single_word)
{
    char **separated = separate_str("Hello", " ");

    cr_assert_str_eq(separated[0], "Hello");
    cr_assert_null(separated[1]);
    free(separated);
}

Test(separate_str, empty_word)
{
    char **separated = separate_str("Hello,World,,Puppy", ",");

    cr_assert_str_eq(separated[0], "Hello");
    cr_assert_str_eq(separated[1], "World");
    cr_assert_str_eq(separated[2], "");
    cr_assert_str_eq(separated[3], "Puppy");
    cr_assert_null(separated[4]);
    free(separated);
}

Test(separate_str, end_separator)
{
    char **separated = separate_str("Hello,World,Puppy,", ",");

    cr_assert_str_eq(separated[0], "Hello");
    cr_assert_str_eq(separated[1], "World");
    cr_assert_str_eq(separated[2], "Puppy");
    cr_assert_str_eq(separated[3], "");
    cr_assert_null(separated[4]);
    free(separated);
}

Test(separate_str, bad_null_string, .init = cr_redirect_stderr)
{
    cr_assert_null(separate_str(NULL, ","));
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/str/separate_str.c|separate_str:20 Caught Error : "
        "NULL Argument\n"
        "- - - - - - - - -\n");
}
