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

//---DEFINES---//
    #define ARGS void const *[]

//---TYPES---//

//---PROTOTYPES---//
// print.c
int print(char const *format, void const *args[]);
int dprint(int fd, char const *format, void const *args[]);

//### INTERNAL COMPONENTS ###//

typedef struct print_type_s {
    char type;
    int (*func)(int fd, void const *);
} print_type_t;

int type_char_tab(int fd, void const *argument);
int type_char(int fd, void const *argument);
int type_str(int fd, void const *argument);
int type_decimal(int fd, void const *argument);
int type_hexa(int fd, void const *argument);
int type_octal(int fd, void const *argument);
int type_binary(int fd, void const *argument);

#endif //MY_PRINT_H
