/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#include "define.h"
#include "str.h"

void concat_stack(char dest[], char *str1, char *str2)
{
    int len1 = str_len(str1);
    int len2 = str_len(str2);

    for (int i = 0; i < len1; i++)
        dest[i] = str1[i];
    for (int i = 0; i <= len2; i++)
        dest[i + len1] = str2[i];
}
