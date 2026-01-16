/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

int nbr_len(int nb)
{
    int len = 0;

    if (nb < 0) {
        nb *= -1;
        len++;
    }
    for (; nb; len++)
        nb /= 10;
    return (len ? len : 1);
}
