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
