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

#ifndef LIB_PRINT_H
    #define LIB_PRINT_H

//---IMPORTS---//
    #include <unistd.h>

//---DEFINES---//

    #define NUM(value) ((void *)(long)(value))

//---TYPES---//
typedef long int ssize_t;
typedef long unsigned size_t;
typedef void const *args_t[];

//---PROTOTYPES---//
// print.c
ssize_t print(char const *format, void const *args[]);
ssize_t dprint(int fd, char const *format, void const *args[]);

//### INTERNAL COMPONENTS ###//

typedef struct {
    char type;
    ssize_t (*func)(int fd, void const *);
} print_type_t;

ssize_t type_char_tab(int fd, void const *argument);
ssize_t type_char(int fd, void const *argument);
ssize_t type_str(int fd, void const *argument);
ssize_t type_decimal(int fd, void const *argument);
ssize_t type_hexa(int fd, void const *argument);
ssize_t type_octal(int fd, void const *argument);
ssize_t type_binary(int fd, void const *argument);

#endif //LIB_PRINT_H
