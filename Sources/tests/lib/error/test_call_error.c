/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "error.h"

Test(call_error, basic_error, .init = cr_redirect_stderr)
{
    cr_assert_eq(call_error("Test Error Message", ERROR_DATA), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|"
        "call_error_basic_error_impl:14 Caught Error : "
        "Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_ierror, basic_error, .init = cr_redirect_stderr)
{
    cr_assert_eq(call_ierror(-1, "Test Error Message", ERROR_DATA), -1);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|"
        "call_ierror_basic_error_impl:25 Caught Error : "
        "Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_nerror, basic_error, .init = cr_redirect_stderr)
{
    cr_assert_null(call_nerror("Test Error Message", ERROR_DATA));
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./tests/lib/error/test_call_error.c|"
        "call_nerror_basic_error_impl:36 Caught Error : "
        "Test Error Message\n"
        "- - - - - - - - -\n");
}

Test(call_error, null_argument, .init = cr_redirect_stderr)
{
    cr_assert_eq(call_error("Test Error Message", NULL), 84);
    cr_assert_stderr_eq_str("NULL ERROR_DATA\n");
}

Test(call_warning, basic_error, .init = cr_redirect_stderr)
{
    call_warning("Test Error Message", ERROR_DATA);
    cr_assert_stderr_eq_str("./tests/lib/error/test_call_error.c|"
        "call_warning_basic_error_impl:53 Warning : "
        "Test Error Message\n");
}

Test(call_warning, null_argument, .init = cr_redirect_stderr)
{
    call_warning("Test Error Message", NULL);
    cr_assert_stderr_eq_str("NULL ERROR_DATA\n");
}
