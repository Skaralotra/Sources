/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "my_print.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
    int var = 10;

    my_print("%d\n%s\n%b\n",
        (void *[]){&var, "helloworld", &var});
    return SUCCESS_CODE;
}
