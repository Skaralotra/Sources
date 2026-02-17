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

static ssize_t call_type(
    int const fd, char const type, int *arg_i, void const *args[])
{
    for (int i = 0; TYPES[i].type; i++)
        if (type == TYPES[i].type)
            return TYPES[i].func(fd, args[(*arg_i)++]);
    return write(fd, &type, 1);
}

ssize_t dprint(int const fd, char const *format, void const *args[])
{
    ssize_t total_size = 0;
    ssize_t size = 0;
    int arg_i = 0;

    for (int i = 0; format[i]; i++) {
        if (format[i] == '%')
            size = call_type(fd, format[++i], &arg_i, args);
        else
            size = write(fd, &format[i], 1);
        if (size == -1)
            return -1;
        total_size += size;
    }
    return total_size;
}

ssize_t print(char const *format, void const *args[])
{
    return dprint(1, format, args);
}
