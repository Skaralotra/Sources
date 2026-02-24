/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

ssize_t dprint_base(int const fd, long long nb, int const base)
{
    char const char_list[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    ssize_t total_size = 0;
    ssize_t size = 0;

    if (base < 2 || base > 36)
        return 0;
    if (nb < 0) {
        size = write(fd, "-", 1);
        nb = -nb;
    }
    if (nb >= base)
        total_size = dprint_base(fd, nb / base, base);
    if (total_size < 0 || size < 0 || write(fd, &char_list[nb % base], 1) < 0)
        return -1;
    return total_size + size + 1;
}

ssize_t print_base(long long const nb, int const base)
{
    return dprint_base(1, nb, base);
}

ssize_t dprint_num(int const fd, long long const nb)
{
    return dprint_base(fd, nb, 10);
}

ssize_t print_num(long long const nb)
{
    return dprint_base(1, nb, 10);
}
