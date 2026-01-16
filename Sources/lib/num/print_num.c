/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

int dprint_base(int const fd, int nb, int const base)
{
    char digit_list[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    int len = 0;

    if (base < 2 || base > 36)
        return 0;
    if (nb < 0) {
        len += (int)write(fd, "-", 1);
        nb *= -1;
    }
    if (nb >= base)
        len += dprint_base(fd, nb / base, base);
    return len + (int)write(fd, &digit_list[nb % base], 1);
}

int print_base(int const nb, int const base)
{
    return dprint_base(1, nb, base);
}

int dprint_num(int const fd, int const nb)
{
    return dprint_base(fd, nb, 10);
}

int print_num(int const nb)
{
    return dprint_base(1, nb, 10);
}
