/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "error.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(call_error, basic_error, .init = redirect_all_std)
{
    cr_assert_eq(call_error("Test Error Message", ERROR_DATA), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|call_error_basic_error_impl:20 Caught Error : Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_ierror, basic_error, .init = redirect_all_std)
{
    cr_assert_eq(call_ierror(-1, "Test Error Message", ERROR_DATA), -1);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|call_ierror_basic_error_impl:29 Caught Error : Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_nerror, basic_error, .init = redirect_all_std)
{
    cr_assert_null(call_nerror("Test Error Message", ERROR_DATA));
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|call_nerror_basic_error_impl:38 Caught Error : Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_warning, basic_error, .init = redirect_all_std)
{
    call_warning("Test Error Message", ERROR_DATA);
    cr_assert_stderr_eq_str("./tests/lib/error/test_call_error.c|call_warning_basic_error_impl:47 Warning : Test Error Message\n");
}
