/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "print.h"
#include "error.h"

int main(int const argc, char const *const argv[])
{
    if (print("argc : %d, argv : %t\n",
            (args_t){&argc, argv}) == 30)
        return call_error("Error Message", ERROR_DATA);
    return SUCCESS_CODE;
}
