/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "nbr.h"

int display_base(int nb, int base)
{
    char digit_list[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    int depth = 0;

    if (base < 2 || base > 36)
        return 0;
    if (nb < 0) {
        depth += (int)write(1, "-", 1);
        nb *= -1;
    }
    if (nb >= base)
        depth += display_base(nb / base, base);
    write(1, &digit_list[nb % base], 1);
    return 1 + depth;
}
