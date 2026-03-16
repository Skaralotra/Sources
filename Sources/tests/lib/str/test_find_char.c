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
