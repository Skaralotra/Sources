/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "str.h"

Test(str_dup, standard)
{
    char *str = str_dup("Hello World");

    cr_assert_str_eq(str, "Hello World");
    free(str);
}

Test(str_dup, null_input)
{
    char *str = str_dup(NULL);

    cr_assert_null(str);
}
