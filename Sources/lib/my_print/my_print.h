/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef MY_PRINT_H
    #define MY_PRINT_H

//---IMPORTS---//
    #include <unistd.h>
    #include "../nbr/nbr.h"
    #include "../str/str.h"
    #include "../tab/tab.h"

//---STRUCTURES---//

//---PROTOTYPES---//
int my_print(char const *format, void *arguments[]);

//### INTERNAL COMPONENTS ###//

//---STRUCTURES---//
typedef struct struct_list_t {
    char type;
    int (*func)(void const *);
} struct_t;

//---PROTOTYPES---//
int flag_char_tab(void const *argument);
int flag_char(void const *argument);
int flag_str(void const *argument);
int flag_decimal(void const *argument);
int flag_hexa(void const *argument);
int flag_octal(void const *argument);
int flag_binary(void const *argument);

#endif //MY_PRINT_H
