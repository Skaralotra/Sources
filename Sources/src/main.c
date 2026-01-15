/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "error.h"
#include "my_print.h"

int main(int const argc, char *argv[])
{
    int var = 10;

    my_print("%d\n%b\n%s\n", (void *[]){&var, &var, "helloworld"});
    if (var == 10)
        return call_error("error message", ERROR_DATA);
    return SUCCESS_CODE;
}
