/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "print.h"

Test(print, char_type, .init = cr_redirect_stdout)
{
    char const chara = 'A';

    cr_assert_eq(print("Chara : %c\n", (args_t){&chara}), 10);
    cr_assert_stdout_eq_str("Chara : A\n");
}

Test(print, str_type, .init = cr_redirect_stdout)
{
    char const *str = "Hello World";

    cr_assert_eq(print("String : %s\n", (args_t){str}), 21);
    cr_assert_stdout_eq_str("String : Hello World\n");
}

Test(print, decimal_type, .init = cr_redirect_stdout)
{
    int const num = 125;

    cr_assert_eq(print("Decimal : %d\n", (args_t){NUM(num)}), 14);
    cr_assert_stdout_eq_str("Decimal : 125\n");
}

Test(print, hexa_type, .init = cr_redirect_stdout)
{
    int const num = 125;

    cr_assert_eq(print("Hexa : %x\n", (args_t){NUM(num)}), 10);
    cr_assert_stdout_eq_str("Hexa : 7d\n");
}

Test(print, octal_type, .init = cr_redirect_stdout)
{
    int const num = 125;

    cr_assert_eq(print("Octal : %o\n", (args_t){NUM(num)}), 12);
    cr_assert_stdout_eq_str("Octal : 175\n");
}

Test(print, binary_type, .init = cr_redirect_stdout)
{
    int const num = 125;

    cr_assert_eq(print("Binary : %b\n", (args_t){NUM(num)}), 17);
    cr_assert_stdout_eq_str("Binary : 1111101\n");
}

Test(print, tab_char_type, .init = cr_redirect_stdout)
{
    char const *tab[] = {"Hello", "World", "Puppy", NULL};

    cr_assert_eq(print("TabChar : %t\n", (args_t){tab}), 30);
    cr_assert_stdout_eq_str("TabChar : Hello, World, Puppy\n");
}

Test(print, invalid_type, .init = cr_redirect_stdout)
{
    cr_assert_eq(print("None : %l\n", (args_t){}), 9);
    cr_assert_stdout_eq_str("None : l\n");
}

Test(print, null_format, .init = cr_redirect_stdout)
{
    cr_assert_eq(print(NULL, NULL), 6);
    cr_assert_stdout_eq_str("(null)");
}
