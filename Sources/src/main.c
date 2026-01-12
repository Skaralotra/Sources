/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "my_print.h"
#include "error.h"

int main(int argc, char *argv[])
{
    int var = 10;

    if (my_print("%d\n%s\n%b\n", (void *[]){&var, "helloworld", &var}))
        return call_error("error test\n");
    return SUCCESS_CODE;
}
