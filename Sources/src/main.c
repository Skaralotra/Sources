/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "print.h"
#include "error.h"
#include "num.h"

int main(int const argc, char *argv[])
{
    char str[] = "Hello";

    if (print("argc : %d, argv : %t, str : %s\n", (args_t){&argc, &argv, &str}) == 11)
        return call_error("Error Message", ERROR_DATA);

    return SUCCESS_CODE;
}
