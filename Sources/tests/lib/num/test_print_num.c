/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "num.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(print_num, positive_number, .init = redirect_all_std)
{
    cr_assert_eq(print_num(125), 3);
    cr_assert_stdout_eq_str("125");
}

Test(print_num, negaive_number, .init = redirect_all_std)
{
    cr_assert_eq(print_num(-125), 4);
    cr_assert_stdout_eq_str("-125");
}

Test(print_num, number_zero, .init = redirect_all_std)
{
    cr_assert_eq(print_num(0), 1);
    cr_assert_stdout_eq_str("0");
}

Test(dprint_num, valid_base, .init = redirect_all_std)
{
    cr_assert_eq(dprint_num(1, 125), 3);
    cr_assert_stdout_eq_str("125");
}

Test(print_base, valid_base, .init = redirect_all_std)
{
    cr_assert_eq(print_base(125, 2), 7);
    cr_assert_stdout_eq_str("1111101");
}

Test(print_base, invalid_base, .init = redirect_all_std)
{
    cr_assert_eq(print_base(125, 0), 0);
    cr_assert_stdout_eq_str("");
}

Test(dprint_base, valid_base, .init = redirect_all_std)
{
    cr_assert_eq(dprint_base(1, 125, 2), 7);
    cr_assert_stdout_eq_str("1111101");
}
