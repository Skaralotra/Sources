/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "tab.h"

Test(free_ctab, standard_free)
{
    char **tab = malloc(sizeof(char *) * 3);

    tab[0] = malloc(sizeof(char) * 5);
    tab[1] = malloc(sizeof(char) * 5);
    tab[2] = NULL;
    free_ctab(tab);
}

Test(free_ctab, null_input)
{
    free_ctab(NULL);
}
