/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "num.h"

Test(power, positive_number)
{
    cr_assert_eq(power(10, 3), 1000);
}

Test(power, negative_number)
{
    cr_assert_eq(power(-10, 3), -1000);
}

Test(power, zero_number)
{
    cr_assert_eq(power(0, 3), 0);
}

Test(power, negative_power)
{
    cr_assert_eq(power(10, -3), 0);
}

Test(power, power_zero)
{
    cr_assert_eq(power(10, 0), 1);
}

Test(power, power_one)
{
    cr_assert_eq(power(10, 1), 10);
}
