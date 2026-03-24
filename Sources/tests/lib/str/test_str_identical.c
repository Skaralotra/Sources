/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "str.h"

Test(str_identical, identical)
{
    cr_assert(str_identical("Hello", "Hello"));
}

Test(str_identical, different)
{
    cr_assert_not(str_identical("Hello", "World"));
}

Test(str_identical, similar)
{
    cr_assert_not(str_identical("Hello", "HelloWorld"));
}

Test(str_identical, null_single_input)
{
    cr_assert_not(str_identical("Hello", NULL));
}

Test(str_identical, null_both_input)
{
    cr_assert(str_identical(NULL, NULL));
}

Test(str_nidentical, identical)
{
    cr_assert(str_nidentical("Hello", "Hello", 5));
}

Test(str_nidentical, different)
{
    cr_assert_not(str_nidentical("Hello", "World", 5));
}

Test(str_nidentical, short_len)
{
    cr_assert(str_nidentical("Hello", "Hello", 3));
}

Test(str_nidentical, large_len)
{
    cr_assert(str_nidentical("Hello", "Hello", 10));
}

Test(str_nidentical, large_and_different)
{
    cr_assert_not(str_nidentical("Hello", "Hel", 5));
}

Test(str_nidentical, null_input)
{
    cr_assert_not(str_nidentical(NULL, "Hello", 5));
}
