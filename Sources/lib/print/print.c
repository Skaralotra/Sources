/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "print.h"

static const print_type_t TYPES[] = {
    {'d', &type_decimal},
    {'x', &type_hexa},
    {'o', &type_octal},
    {'b', &type_binary},
    {'t', &type_char_tab},
    {'s', &type_str},
    {'c', &type_char},
    {0, NULL}
};

static int call_type(int const fd, char const type, void const *arg)
{
    for (int i = 0; TYPES[i].type; i++)
        if (type == TYPES[i].type)
            return TYPES[i].func(fd, arg);
    return (int)write(fd, &type, 1);
}

int dprint(int const fd, char const *format, void const *args[])
{
    int char_total = 0;
    int used_args = 0;

    for (int i = 0; format[i]; i++)
        if (format[i] == '%') {
            char_total += call_type(fd, format[i + 1], args[used_args]);
            used_args++;
            i++;
        } else
            char_total += (int)write(fd, &format[i], 1);
    return char_total;
}

int print(char const *format, void const *args[])
{
    return dprint(1, format, args);
}
