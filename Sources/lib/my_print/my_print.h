/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

#ifndef MY_PRINT_H
    #define MY_PRINT_H

//---IMPORTS---//
    #include "define.h"
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
    int (*func)(void *);
} struct_t;

//---PROTOTYPES---//
int flag_char_tab(void *argument);
int flag_char(void *argument);
int flag_str(void *argument);
int flag_decimal(void *argument);
int flag_hexa(void *argument);
int flag_octal(void *argument);
int flag_binary(void *argument);

#endif //MY_PRINT_H
