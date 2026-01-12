##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra Makefile
##

# SOURCES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

INCLUDE := $(shell find ./include -type f -name "*.h")

LIB		:= $(shell find ./lib -type f -name "*.c")

SRC		:= $(shell find ./src -type f -name "*.c")

OBJ		= $(LIB:.c=.o)

# TESTS	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

TEST	:= $(shell find ./tests -type f -name "*.c")

# COMPILATION	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- FLAGS -----#
CSFML_FLAGS = "-lcsfml-window" "-lcsfml-system" "-lcsfml-graphics"

CFLAGS = "-Wall" "-g3"

#----- INCLUDE -----#
INCLUDE_FLAG = "-I"
INCLUDE_PATH = "./include/"

#----- COMPILER -----#
CC = "clang"

# NAMES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TESTS_NAME = "unit_tests"

ARCHIVE = "./lib/libskaralotra.a"

NAME = "name"

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- REDEFINITION -----#
%.o: %.c
		@$(CC) $(INCLUDE_FLAG)$(INCLUDE_PATH) -c $< -o $@

#----- DEFAULT -----#
all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(ARCHIVE) $(OBJ)
	@$(CC) -o $(NAME) $(SRC) $(ARCHIVE) $(INCLUDE_FLAG)$(INCLUDE_PATH) $(CFLAGS)
	@make clean --no-print-directory

clean:
	@rm -f ./a.out
	@rm -f $(INCLUDE_PATH)*.pch
	@rm -f ./*.gcno

fclean:	clean
	@rm -f $(NAME)
	@rm -f $(ARCHIVE)
	@find . -type f -name "*.o" -delete

re:	fclean all

run: all
	@./$(NAME)

#----- TESTS -----#
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
