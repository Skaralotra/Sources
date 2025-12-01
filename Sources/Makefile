##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra Makefile
##

### sources ###

INCLUDE	=	include/define.h
INCLUDE	+=	include/typedef.h
INCLUDE	+=	include/nbr.h
INCLUDE	+=	include/str.h
INCLUDE	+=	include/tab.h

LIB	=	lib/my_print/my_print.c
LIB	+=	lib/my_print/flag_char.c
LIB	+=	lib/my_print/flag_nbr.c
LIB	+=	lib/my_print/flag_str.c
LIB	+=	lib/my_print/flag_tab.c

LIB	+=	lib/nbr/display_base.c
LIB	+=	lib/nbr/display_nbr.c
LIB	+=	lib/nbr/nbr_len.c
LIB	+=	lib/nbr/power.c
LIB	+=	lib/nbr/str_to_nbr.c

LIB	+=	lib/str/concat_str.c
LIB	+=	lib/str/create_str.c
LIB	+=	lib/str/display_error.c
LIB	+=	lib/str/display_str.c
LIB	+=	lib/str/nbr_to_str.c
LIB	+=	lib/str/str_len.c
LIB	+=	lib/str/str_identical.c

LIB	+=	lib/tab/concat_tab.c
LIB	+=	lib/tab/create_tab.c
LIB	+=	lib/tab/display_tab.c
LIB	+=	lib/tab/free_tab.c
LIB	+=	lib/tab/tab_len.c

SRC	=	src/main.c

### tests ###

TEST	=	tests/unit_tests.c

### compilation ###

NAME	=	name

### commands ###

all:	$(NAME)

$(NAME):
	@clang -o $(NAME) $(SRC) $(LIB) -I include/

clean:
	@rm -f ./a.out include/*.pch

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

run: re
	@./$(NAME)

unit_tests: re
	@clang -o unit_tests $(SRC) $(TEST) -I include/ --coverage -lcriterion

tests_run: unit_tests
	@./unit_tests

gcovr_run: unit_tests
	@gcovr -e tests

style_check:
	@epiclang $(INCLUDE) $(SRC) $(LIB) -I./include
	@echo "\033[97m\033[4mepiclang done\033[0m"
	@make clean --no-print-directory

HEADER = "/*\n** EPITECH PROJECT, 2025\n** <project name>\n** File description:\n** <description>\n*/"
GUARD = "\n\n\#ifndef HEADER_H_\n    \#define HEADER_H_\n\n    \#define ERROR_CODE (84)\n\n\#endif //HEADER_H_"

settle:
	@mkdir includes tests
	@echo $(HEADER) > main.c
	@echo $(HEADER)$(GUARD) > includes/header.h
	@echo $(HEADER) > tests/unit_tests.c
