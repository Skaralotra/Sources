/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

int nbr_len(unsigned nb)
{
    int len = 0;

    for (; nb; len++)
        nb /= 10;
    return (len ? len : 1);
}
