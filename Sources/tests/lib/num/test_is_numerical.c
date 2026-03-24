/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(is_integer, positive_number)
{
    cr_assert(is_integer("125"));
}

Test(is_integer, negative_number)
{
    cr_assert(is_integer("-125"));
}

Test(is_integer, bad_positive_input)
{
    cr_assert_not(is_integer("A125"));
}

Test(is_integer, bad_negative_input)
{
    cr_assert_not(is_integer("-A125"));
}

Test(is_integer, zero_number)
{
    cr_assert_not(is_integer("ABC"));
}

Test(is_integer, null_input)
{
    cr_assert_not(is_integer(NULL));
}

Test(is_float, positive_number)
{
    cr_assert(is_float("12.5"));
}

Test(is_float, negative_number)
{
    cr_assert(is_float("-12.5"));
}

Test(is_float, bad_positive_input)
{
    cr_assert_not(is_float("A12.5"));
}

Test(is_float, bad_negative_input)
{
    cr_assert_not(is_float("-A12.5"));
}

Test(is_float, zero_number)
{
    cr_assert_not(is_float("ABC"));
}

Test(is_float, null_input)
{
    cr_assert_not(is_float(NULL));
}

Test(is_float, bad_no_point)
{
    cr_assert_not(is_float("125"));
}
