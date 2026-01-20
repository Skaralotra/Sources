/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "print.h"
#include "error.h"

int main(int const argc, char *argv[]) {
    if (print("%s %s\n", (ARGS){"Hello", "Word"}) == 12)
        return call_error("Error Message", ERROR_DATA);
    return SUCCESS_CODE;
}
