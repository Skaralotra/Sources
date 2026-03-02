/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

ssize_t power(ssize_t const nb, ssize_t const p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    return nb * power(nb, p - 1);
}
