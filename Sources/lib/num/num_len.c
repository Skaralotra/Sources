/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

size_t num_len(int nb)
{
    size_t len = 0;

    if (nb < 0) {
        nb = -nb;
        len++;
    }
    for (; nb; len++)
        nb /= 10;
    return (len ? len : 1);
}
