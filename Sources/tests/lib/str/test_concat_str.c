/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "str.h"

Test(concat_str, standard_concat)
{
    char *concat = concat_str("Hello", "World");

    cr_assert_str_eq(concat, "HelloWorld");
    free(concat);
}

Test(concat_str, null_input)
{
    char *concat = concat_str("Hello", NULL);

    cr_assert_null(concat);
}
