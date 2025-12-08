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
INCLUDE	+=	include/my_print.h
INCLUDE	+=	include/error.h

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
LIB	+=	lib/str/concat_stack.c
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

LIB +=	lib/error/call_error.c

SRC	=	src/main.c

### tests ###

TEST	=	tests/unit_tests.c

TESTS_NAME = unit_tests

### compilation ###
INCLUDE_FLAG = "-I"
INCLUDE_PATH = "./include/"

NAME = name

CC = "clang"

### rules ###

all:	$(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(SRC) $(LIB) $(INCLUDE_FLAG)$(INCLUDE_PATH)

clean:
	@rm -f ./a.out $(INCLUDE_PATH)*.pch

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

run: re
	@./$(NAME)

unit_tests: re
	@clang -o $(TESTS_NAME) $(SRC) $(TEST) $(INCLUDE_FLAG)$(INCLUDE_PATH) --coverage -lcriterion

tests_run: unit_tests
	@./$(TESTS_NAME)

gcovr_run: unit_tests
	@gcovr -e $(TESTS_NAME)

style_check:
	@epiclang $(INCLUDE) $(SRC) $(LIB) $(INCLUDE_FLAG)$(INCLUDE_PATH)
	@echo "\033[97m\033[4mepiclang done\033[0m"
	@make clean --no-print-directory

settle:
	@echo "*" > .idea/.gitignore
	@settle