/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "tab.h"

Test(create_tab, standard_create_tab)
{
    size_t const size = 3;
    char **tab = create_tab(size);

    cr_assert_null(tab[size]);
    free(tab);
}

Test(create_slab, standard_create_slab)
{
    char **slab = create_slab();

    cr_assert_null(slab[0]);
    free(slab);
}
