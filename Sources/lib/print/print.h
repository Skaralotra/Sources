/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

    char const str[] = "hello";
    int var = str_len(str);

    print("%d\n%b\n%s\n%s", (ARGS){&var, &var, str, "word"});

*** Syntax Example **/

#ifndef MY_PRINT_H
    #define MY_PRINT_H

//---DEFINE---//
    #define ARGS void const *[]

//---IMPORTS---//
    #include <unistd.h>
    #include "num.h"
    #include "str.h"
    #include "tab.h"

//---STRUCTURES---//

//---PROTOTYPES---//
int print(char const *format, void const *args[]);
int dprint(int fd, char const *format, void const *args[]);

//### INTERNAL COMPONENTS ###//

//---STRUCTURES---//
typedef struct type_s {
    char type;
    int (*func)(void const *);
} type_t;

//---PROTOTYPES---//
int flag_char_tab(void const *argument);
int flag_char(void const *argument);
int flag_str(void const *argument);
int flag_decimal(void const *argument);
int flag_hexa(void const *argument);
int flag_octal(void const *argument);
int flag_binary(void const *argument);

#endif //MY_PRINT_H
