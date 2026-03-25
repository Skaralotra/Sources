/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

ssize_t power(ssize_t const nbr, ssize_t const pow)
{
    if (pow == 0)
        return 1;
    if (pow < 0)
        return 0;
    return nbr * power(nbr, pow - 1);
}
