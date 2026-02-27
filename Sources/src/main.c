/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "print.h"
#include "error.h"
#include "str.h"
#include "tab.h"

int main(int const argc, char const *const argv[])
{
    cslab_t tab = create_cslab();

    tab = append_ctab(tab, (char *[]){"Hello", "World", NULL});
    tab = append_ctab(tab, (char *[]){"Obamna", "Puppy", "Obamna", "Puppy", "Obamna", "Puppy", NULL});
    if (print("argc : %d, argv : %t\ntab : %t\n",
            (args_t){&argc, argv, tab}) == 30)
        return call_error("Error Message", ERROR_DATA);
    free(tab);
    return SUCCESS_CODE;
}
