/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "my_print.h"

static const struct_t TAB[] = {
    {'d', &flag_decimal},
    {'x', &flag_hexa},
    {'o', &flag_octal},
    {'b', &flag_binary},
    {'t', &flag_char_tab},
    {'s', &flag_str},
    {'c', &flag_char},
    {0, NULL}
};

static int sort_type(char type, void *argument)
{
    for (int i = 0; TAB[i].type; i++)
        if (type == TAB[i].type)
            return TAB[i].func(argument);
    return (int)write(1, &type, 1);
}

int my_print(char const *format, void *arguments[]) {
    int char_total = 0;
    int used_args = 0;

    for (int i = 0; format[i]; i++)
        if (format[i] == '%') {
            char_total += sort_type(format[i + 1], arguments[used_args]);
            used_args++;
            i++;
        } else
            char_total += (int)write(1, &format[i], 1);
    return char_total;
}
