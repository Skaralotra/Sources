##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra Makefile
##

# SOURCES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

LIB		:= $(shell find ./lib/ -type f -name "*.c")

SRC		:= $(shell find ./src/ -type f -name "*.c")

SRC_OBJ	 = $(SRC:.c=.o)

# TESTS	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TEST		:= $(shell find ./tests/ -type f -name "*.c")
TEST_LIB	:= $(shell find ./lib/ -type f -name "*.c")
TEST_SRC	:= $(shell find ./src/ -type f -name "*.c" ! -name "main.c")

# COMPILATION	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- FLAGS -----#
CFLAGS = "-Wall" "-Wextra"

CPPFLAGS = "-I./include"
CPPFLAGS += $(shell find ./lib/ -mindepth 1 -type d -printf "-I./lib/%f/ ")

LDFLAGS = "-L./lib/"
LDLIBS	= "-lmy"

CRIT 	= "--coverage" "-lcriterion"

#----- COMPILER -----#
CC = "clang"

# NAMES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TESTS_NAME 	= "unit_tests"

EPIC_BIN	= "epic_bin"

NAME 		= name

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- DEFAULT -----#
all:	$(NAME)

$(NAME): $(SRC_OBJ)
	@ $(MAKE) -C ./lib/ --no-print-directory
	@ $(CC) $(LDFLAGS) -o $(NAME) $(SRC_OBJ) $(LDLIBS)

clean:
	@ find . -type f -name "*.gcno" -delete
	@ find . -type f -name "*.gcda" -delete
	@ find . -type f -name "*~" -delete
	@ find . -type f -name "*#" -delete
	@ find ./src/ -type f -name "*.o" -delete

fclean:	clean
	@ rm -f $(NAME)
	@ rm -f $(TESTS_NAME)
	@ $(MAKE) -C ./lib/ fclean --no-print-directory

re:	fclean all

run: all
	@ ./$(NAME)

#----- TESTS -----#
unit_tests: re
	@ $(CC) -o $(TESTS_NAME) $(TEST_LIB) $(TEST_SRC) $(TEST) $(CFLAGS) $(CPPFLAGS) $(CRIT)

test_run: unit_tests
	@ ./$(TESTS_NAME)

gcovr_run: test_run
	@ gcovr --gcov-executable "llvm-cov gcov" --exclude tests/

epiclean:
	@ rm -f $(EPIC_BIN)
	@ find . -type f -name "*.pch" -delete

style_check:
	@ epiclang -o $(EPIC_BIN) $(SRC) $(LIB) $(CPPFLAGS)
	@ echo "[Epiclang Done]"
	@ $(MAKE) epiclean --no-print-directory

debug: CFLAGS += "-g3"
debug: re

.SILENT: $(SRC_OBJ)
.PHONY: all clean fclean re run unit_tests test_run gcovr_run epiclean style_check debug
