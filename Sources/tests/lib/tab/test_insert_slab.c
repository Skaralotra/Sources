/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "tab.h"

Test(append_slab, standard_append)
{
    char **slab = create_slab();

    for (int i = 0; i <= ALLOC_SIZE; i++) {
        cr_assert_eq(append_slab(&slab, "Hello"), 0);
        cr_assert_str_eq(slab[i], "Hello");
    }
    cr_assert_null(slab[ALLOC_SIZE + 1]);
    free(slab);
}

Test(append_slab, append_NULL_pointer, .init = cr_redirect_stderr)
{
    append_slab(NULL, "Hello");
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/tab/insert_slab.c|append_slab:16 Caught Error : NULL Pointer\n"
        "- - - - - - - - -\n");
}

Test(append_slab, append_NULL_slab, .init = cr_redirect_stderr)
{
    char **slab = NULL;

    cr_assert_eq(append_slab(&slab, "Hello"), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/tab/insert_slab.c|append_slab:21 Caught Error : NULL Slab\n"
        "- - - - - - - - -\n");
}

Test(append_slab, append_NULL_element, .init = cr_redirect_stderr)
{
    char **slab = create_slab();

    cr_assert_eq(append_slab(&slab, NULL), 0);
    cr_assert_stderr_eq_str(
        "./lib/tab/insert_slab.c|append_slab:23 Warning : NULL Element\n");
    free(slab);
}

Test(extend_slab, standard_extend)
{
    char **slab = create_slab();

    for (int i = 0; i <= ALLOC_SIZE; i++) {
        cr_assert_eq(extend_slab(&slab, (void *[]){"Hello", "World", NULL}), 0);
        cr_assert_str_eq(slab[i * 2], "Hello");
        cr_assert_str_eq(slab[i * 2 + 1], "World");
    }
    cr_assert_null(slab[(ALLOC_SIZE + 1) * 2]);
    free(slab);
}

Test(extend_slab, extend_NULL_pointer, .init = cr_redirect_stderr)
{
    cr_assert_eq(extend_slab(NULL, (void *[]){"Hello", "World", NULL}), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/tab/insert_slab.c|extend_slab:35 Caught Error : NULL Pointer\n"
        "- - - - - - - - -\n");
}

Test(extend_slab, extend_NULL_slab, .init = cr_redirect_stderr)
{
    char **slab = NULL;

    cr_assert_eq(extend_slab(&slab, (void *[]){"Hello", "World", NULL}), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/tab/insert_slab.c|extend_slab:40 Caught Error : NULL Slab\n"
        "- - - - - - - - -\n");
}

Test(extend_slab, extend_NULL_elements, .init = cr_redirect_stderr)
{
    char **slab = create_slab();

    cr_assert_eq(extend_slab(&slab, NULL), 84);
    cr_assert_stderr_eq_str(
        "- - - ERROR - - -\n"
        "./lib/tab/insert_slab.c|extend_slab:42 Caught Error : NULL Elements\n"
        "- - - - - - - - -\n");
    free(slab);
}
