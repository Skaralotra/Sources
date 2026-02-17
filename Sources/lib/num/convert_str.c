/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "num.h"

long convert_str(char const *str)
{
    int nbr = 0;

    if (!str)
        return 0;
    for (int i = 0; str[i]; i++)
        if (IS_NUM(str[i]))
            nbr = (nbr * 10) + (str[i] - '0');
    if (str[0] == '-')
        nbr = -nbr;
    return nbr;
}
