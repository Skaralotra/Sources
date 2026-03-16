/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <criterion/criterion.h>
#include "error.h"

Test(error_free, status_nominal)
{
    char *array1 = strdup("Hello");
    char *array2 = strdup("World");
    char *array3 = strdup("Puppy");

    cr_assert_eq(error_free(3, (free_array_t []){
        {array1, &free},
        {array2, &free},
        {array3, &free}}), 0);
    free(array1);
    free(array2);
    free(array3);
}

Test(error_free, failed_malloc)
{
    char *array1 = strdup("Hello");
    char *array2 = strdup("World");
    char *array3 = NULL;

    if (error_free(3, (free_array_t []){
        {array1, NULL},
        {array2, &free},
        {array3, &free}})) {
        free(array1);
        return;
    }
    free(array1);
    free(array2);
    cr_assert_fail();
}

Test(error_free, null_args)
{
    cr_assert_eq(error_free(3, NULL), 84);
}