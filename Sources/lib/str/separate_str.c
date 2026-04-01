/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "error.h"
#include "tab.h"

char **separate_str(char const *str, char const *separator)
{
    char **separated = NULL;
    size_t const separator_len = str_len(separator);
    size_t start = 0;
    size_t len = 0;

    if (!str || !separator)
        return call_nerror("NULL Argument", ERROR_DATA);
    separated = create_slab();
    if (!separated)
        return call_nerror("Malloc Failed", ERROR_DATA);
    while (str[start + len])
        if (str_nidentical(&str[start + len], separator, separator_len)) {
            append_slab(&separated, str_ndup(&str[start], len));
            start += len + separator_len;
            len = 0;
        } else
            len++;
    append_slab(&separated, str_ndup(&str[start], len));
    return separated;
}
