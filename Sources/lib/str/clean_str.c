/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "str.h"
#include "error.h"
#include "tab.h"

static void str_downshift(char *str, size_t const offset)
{
    size_t len = str_len(str);

    if (!str)
        return call_warning("NULL Argument", ERROR_DATA);
    for (size_t i = 0; i + offset <= len; i++)
        str[i] = str[i + offset];
}

void clean_mixed(char *str, char const *mixed)
{
    size_t start = 0;
    bool space = false;

    if (!str || !mixed)
        return call_warning("NULL Argument", ERROR_DATA);
    for (size_t i = 0; str[i]; i++) {
        if (find_char(mixed, str[i]) && !space) {
            start = i;
            space = true;
        }
        if (!find_char(mixed, str[i]) && space) {
            str[start] = (!i ? str[start] : SEPAR_CHAR);
            str_downshift(&str[start + !!start], i - start - !!start);
            i = start;
            space = false;
        }
    }
    if (space)
        str[start] = '\0';
}
