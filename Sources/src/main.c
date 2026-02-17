/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include <stdio.h>

#include "define.h"
#include "print.h"
#include "error.h"

int main(int const argc, char *argv[])
{
    int var = 0;
    int *var2 = &var;
/*
    printf("var = %c\n", "Hello"[(*var2)++]);
    printf("var = %c\n", "Hello"[(*var2)++]);
    printf("var = %c\n", "Hello"[(*var2)++]);
*/
    print("argc : %d, argv : %t, %%, num : %b\n", (args_t){&argc, argv, &var});
    //if (print("argc : %d, argv : %t, %%, num : %b\n", (args_t){&argc, argv, &var}) == 11)
    //    return call_error("Error Message", ERROR_DATA);
    return SUCCESS_CODE;
}
