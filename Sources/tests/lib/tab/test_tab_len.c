/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "tab.h"

Test(ctab_len, standard)
{
    char const *const tab[] = {"Hello", "World", NULL};

    cr_assert_eq(ctab_len(tab), 2);
}

Test(ctab_len, null_input)
{
    cr_assert_eq(ctab_len(NULL), 0);
}
