/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "str.h"

Test(str_len, standard)
{
    cr_assert_eq(str_len("Hello World"), 11);
}

Test(str_len, null_input)
{
    cr_assert_eq(str_len(NULL), 0);
}
