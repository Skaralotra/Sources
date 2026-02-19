/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(is_numerical, positive_number)
{
    cr_assert(is_numerical("125"));
}

Test(is_numerical, negative_number)
{
    cr_assert(is_numerical("-125"));
}

Test(is_numerical, bad_positive_input)
{
    cr_assert_not(is_numerical("A125"));
}

Test(is_numerical, bad_negative_input)
{
    cr_assert_not(is_numerical("-A125"));
}

Test(is_numerical, zero_number)
{
    cr_assert_not(is_numerical("ABC"));
}

Test(is_numerical, null_input)
{
    cr_assert_not(is_numerical(NULL));
}
