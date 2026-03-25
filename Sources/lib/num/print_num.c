/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

ssize_t dprint_base(int const fd, long long nbr, int const base)
{
    char const char_list[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    ssize_t total_size = 0;
    ssize_t size = 0;

    if (base < 2 || base > 36)
        return 0;
    if (nbr < 0) {
        size = write(fd, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= base)
        total_size = dprint_base(fd, nbr / base, base);
    if (total_size < 0 || size < 0 || write(fd, &char_list[nbr % base], 1) < 0)
        return -1;
    return total_size + size + 1;
}

ssize_t print_base(long long const nbr, int const base)
{
    return dprint_base(1, nbr, base);
}

ssize_t dprint_num(int const fd, long long const nbr)
{
    return dprint_base(fd, nbr, 10);
}

ssize_t print_num(long long const nbr)
{
    return dprint_base(1, nbr, 10);
}
