/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "tab.h"

Test(tab_len, standard)
{
    char *tab[] = {"Hello", "World", NULL};

    cr_assert_eq(tab_len(tab), 2);
}

Test(tab_len, null_input)
{
    cr_assert_eq(tab_len(NULL), 0);
}
