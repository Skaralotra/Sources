/*
** EPITECH PROJECT, 2025
** <project name>
** File description:
** <description>
*/

/** Syntax Example ***

    char const str[] = "hello";
    int var = str_len(str);

    int print("%d\n%b\n%s\n%s", (ARGS){&var, &var, str, "word"});

*** Syntax Example **/

#ifndef MY_PRINT_H
    #define MY_PRINT_H

//---IMPORTS---//
    #include <unistd.h>
    #include "num.h"
    #include "str.h"
    #include "tab.h"

//---DEFINES---//
    #define ARGS void const *[]

//---STRUCTURES---//

//---PROTOTYPES---//
// print.c
int print(char const *format, void const *args[]);
int dprint(int fd, char const *format, void const *args[]);

//### INTERNAL COMPONENTS ###//

typedef struct type_s {
    char type;
    int (*func)(int fd, void const *);
} type_t;

int flag_char_tab(int fd, void const *argument);
int flag_char(int fd, void const *argument);
int flag_str(int fd, void const *argument);
int flag_decimal(int fd, void const *argument);
int flag_hexa(int fd, void const *argument);
int flag_octal(int fd, void const *argument);
int flag_binary(int fd, void const *argument);

#endif //MY_PRINT_H
