/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

size_t num_len(int nbr)
{
    size_t len = 0;

    if (nbr < 0) {
        nbr = -nbr;
        len++;
    }
    for (; nbr; len++)
        nbr /= 10;
    return (len ? len : 1);
}
