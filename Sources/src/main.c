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
    int var = is_numerical("-123");

    if (print("argc : %d, argv : %t, is_num : %d\n", (args_t){&argc, argv, &var}) == 11)
        return call_error("Error Message", ERROR_DATA);
    return SUCCESS_CODE;
}
