##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra Makefile
##

# SOURCES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TEST	:= $(shell find ./tests/ -type f -name "*.c")

LIB		:= $(shell find ./lib/ -type f -name "*.c")

SRC		:= $(shell find ./src/ -type f -name "*.c")

SRC_OBJ	 = $(SRC:.c=.o)

# COMPILATION	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- FLAGS -----#
CFLAGS = "-Wall" "-Wextra"

CPPFLAGS := "-I./include" $(shell find ./lib/ -mindepth 1 -type d -printf "-I./lib/%f/ ")

LDFLAGS = "-L./lib/"
LDLIBS	= "-lmy"

CRIT 	= "--coverage" "-lcriterion"

CC = "clang"

# NAMES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TEST_NAME 	= "unit_tests"

EPIC_NAME	= "epic_bin"

NAME 		= name

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- DEFAULT -----#
all:	$(NAME)

$(NAME): $(SRC_OBJ)
	$(MAKE) -C ./lib/ --no-print-directory
	$(CC) $(LDFLAGS) -o $(NAME) $(SRC_OBJ) $(LDLIBS)

clean: epiclean
	find . -type f -name "*.gcno" -delete
	find . -type f -name "*.gcda" -delete
	find . -type f -name "*~" -delete
	find . -type f -name "*#" -delete
	find ./src/ -type f -name "*.o" -delete

fclean:	clean
	rm -f $(NAME) $(TEST_NAME)
	$(MAKE) -C ./lib/ fclean --no-print-directory

re:	fclean all

#----- TESTS -----#
unit_tests: fclean
	$(CC) -o $(TEST_NAME) $(filter-out ./src/main.c, $(SRC)) $(LIB) $(TEST) $(CFLAGS) $(CPPFLAGS) $(CRIT)

test_run: unit_tests
	./$(TEST_NAME)

gcovr_run: test_run
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/

#----- BONUS -----#
run: all
	./$(NAME)

epiclean:
	rm -f $(EPIC_NAME)
	find . -type f -name "*.pch" -delete

style_check:
	epiclang -o $(EPIC_NAME) $(SRC) $(LIB) $(CPPFLAGS)
	echo "[Epiclang Done]"
	$(MAKE) epiclean --no-print-directory

debug: CFLAGS += "-g3"
debug: re

.SILENT: $(SRC_OBJ) $(NAME) clean fclean re unit_tests test_run gcovr_run run epiclean style_check
.PHONY: all clean fclean re run unit_tests test_run gcovr_run epiclean style_check debug
