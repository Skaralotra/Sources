/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "nbr.h"

int power(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    return nb * power(nb, p - 1);
}
