/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "nbr.h"

static void nbr_to_str_rec(unsigned nb, int index, char *str)
{
    str[index - 1] = (nb % 10) + '0';
    if (nb >= 10)
        nbr_to_str_rec(nb / 10, index - 1, str);
}

char *nbr_to_str(int nb)
{
    int len = nbr_len(nb) + ((nb < 0) ? 1 : 0);
    char *str = create_str(len + 1);

    if (!str)
        return NULL;
    if (nb < 0) {
        str[0] = '-';
        nbr_to_str_rec(nb, len, &str[1]);
    } else {
        nbr_to_str_rec(nb, len, str);
    }
    return str;
}
