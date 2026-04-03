/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "str.h"

Test(find_char, find_true)
{
    cr_assert_eq(find_char("Hello World", 'H'), 1);
}

Test(find_char, find_false)
{
    cr_assert_eq(find_char("Hello World", 'A'), 0);
}

Test(find_char, find_null)
{
    cr_assert_eq(find_char(NULL, 'A'), 0);
}

Test(count_char, count_standard)
{
    cr_assert_eq(count_char("Hello World", 'l'), 3);
}

Test(count_char, count_zero)
{
    cr_assert_eq(count_char("Hello World", 'A'), 0);
}

Test(count_char, count_null)
{
    cr_assert_eq(count_char(NULL, 'l'), 0);
}

Test(valid_char, valid_true)
{
    cr_assert_eq(valid_char("Hello World", "HeloWrd "), 1);
}

Test(valid_char, valid_false)
{
    cr_assert_eq(valid_char("Hello World", "ABC"), 0);
}

Test(valid_char, valid_null)
{
    cr_assert_eq(valid_char(NULL, NULL), 0);
}

Test(replace_char, replace_standard)
{
    char str[] = "Hello World";

    replace_char(str, 'l', 'a');
    cr_assert_str_eq(str, "Heaao Worad");
}

Test(replace_char, replace_null)
{
    replace_char(NULL, 'l', 'a');
}
