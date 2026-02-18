/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(num_len, positive_number)
{
    cr_assert_eq(num_len(125), 3);
}

Test(num_len, negative_number)
{
    cr_assert_eq(num_len(-125), 4);
}

Test(num_len, zero_number)
{
    cr_assert_eq(num_len(0), 1);
}
