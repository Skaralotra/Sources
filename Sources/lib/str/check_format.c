/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "num.h"
/*
static size_t check_num(char const *str)
{
    size_t len = 0;

    for (; IS_NUM(str[len]); len++);
    return len;
}

static size_t check_letter(char const *str)
{
    size_t len = 0;

    for (; IS_LETTER(str[len]); len++);
    return len;
}

static size_t type_check(char type, char const *str)
{
    return 0;
}

bool check_format(char const *format, char const *str)
{
    size_t str_i = 0;
    size_t size = 0;

    if (!format || !str)
        return false;
    for (size_t i = 0; format[i]; i++) {
        if (format[i] == '%') {
            i++;
            size = type_check(format[i], &str[str_i]);
        } else
            size = (format[i] == str[str_i]);
        if (size == 0)
            return false;
        str_i += size;
    }
    return true;
}
*/
