/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "nbr.h"
#include "../str/str.h"

int get_nbr(char const *str)
{
    int nb = 0;

    if (!str)
        return 0;
    if (!str[0])
        return 0;
    for (int i = 0; str[i]; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            nb += power(10, str_len(str) - i - 1) * (str[i] - '0');
            continue;
        }
        if (str[i] == '-') {
            nb *= -1;
            continue;
        }
        return 0;
    }
    return nb;
}
