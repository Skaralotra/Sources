##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra Makefile
##

# SOURCES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

LIB		:= $(shell find ./lib/ -type f -name "*.c")

SRC		:= $(shell find ./src/ -type f -name "*.c")

OBJ	 = $(SRC:.c=.o)

# TESTS	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

TEST	:= $(shell find ./tests/ -type f -name "*.c")

TEST_OBJ	= $(TEST:.c=.o)

# COMPILATION	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- FLAGS -----#
CFLAGS = "-Wall" "-Wextra"

CPPFLAGS = "-I./include"
CPPFLAGS += $(shell find ./lib/ -mindepth 1 -type d -printf "-I./lib/%f/ ")

LDFLAGS = "-L./lib/"
LDLIBS	= "-lmy"

#----- COMPILER -----#
CC = "clang"

# NAMES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TESTS_NAME 	= "unit_tests"

EPIC_BIN	= "epic_bin"

NAME 		= name

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- DEFAULT -----#
all:	$(NAME)

$(NAME): $(OBJ)
	@ $(MAKE) -C ./lib/
	@ $(CC) $(LDFLAGS) -o $(NAME) $(OBJ) $(LDLIBS)

clean:
	@ find . -type f -name "*.gcno" -delete
	@ find . -type f -name "*~" -delete
	@ find . -type f -name "*#" -delete
	@ find ./src/ -type f -name "*.o" -delete

fclean:	clean
	@ rm -f $(NAME)
	@ $(MAKE) -C ./lib/ fclean --no-print-directory

re:	fclean all

run: all
	@ ./$(NAME)

#----- TESTS -----#
unit_tests: re
	@ clang -o $(TESTS_NAME) $(SRC) $(TEST) $(INCLUDE_FLAG)$(INCLUDE_PATH) --coverage -lcriterion

test_run: unit_tests
	@ ./$(TESTS_NAME)

gcovr_run: unit_tests
	@ gcovr -e $(TESTS_NAME)

epiclean:
	@ rm -f $(EPIC_BIN)
	@ find . -type f -name "*.pch" -delete

style_check:
	@ epiclang -o $(EPIC_BIN) $(SRC) $(LIB) $(CPPFLAGS)
	@ echo "[Epiclang Done]"
	@ $(MAKE) epiclean --no-print-directory

debug: CFLAGS += "-g3"
debug: re

.PHONY: all clean fclean re run unit_tests test_run gcovr_run epiclean style_check debug
