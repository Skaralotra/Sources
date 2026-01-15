/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "print.h"
#include "error.h"

int main(int const argc, char *argv[])
{
    int var = 10;

    print("%d\n%b\n%s\n", (ARGS){&var, &var, "helloworld"});
    if (var == 10)
        return call_error("error message", ERROR_DATA);
    return SUCCESS_CODE;
}
