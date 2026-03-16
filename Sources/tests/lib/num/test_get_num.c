/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(get_num, positive_number)
{
    cr_assert_eq(get_num("125"), 125);
}

Test(get_num, negative_number)
{
    cr_assert_eq(get_num("-125"), -125);
}

Test(get_num, bad_positive_input)
{
    cr_assert_eq(get_num("ABC-12D5E"), 0);
}

Test(get_num, bad_negative_input)
{
    cr_assert_eq(get_num("-ABC-12D5E"), 0);
}

Test(get_num, zero_number)
{
    cr_assert_eq(get_num("ABC"), 0);
}

Test(get_num, null_input)
{
    cr_assert_eq(get_num(NULL), 0);
}
