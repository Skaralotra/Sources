/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(convert_str, positive_number)
{
    cr_assert_eq(convert_str("125"), 125);
}

Test(convert_str, negative_number)
{
    cr_assert_eq(convert_str("-125"), -125);
}

Test(convert_str, bad_positive_input)
{
    cr_assert_eq(convert_str("ABC-12D5E"), 125);
}

Test(convert_str, bad_negative_input)
{
    cr_assert_eq(convert_str("-ABC-12D5E"), -125);
}

Test(convert_str, zero_number)
{
    cr_assert_eq(convert_str("ABC"), 0);
}

Test(convert_str, null_input)
{
    cr_assert_eq(convert_str(NULL), 0);
}
