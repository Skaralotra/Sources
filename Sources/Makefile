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
CFLAGS 		= "-Wall" "-Wextra" "-g3"

CPPFLAGS	= "-I./include" $(shell find ./lib/ -mindepth 1 -type d -printf "-I./lib/%f/ ")

LDFLAGS 	= "-L./lib/"
LDLIBS		= "-lmy"

CRIT 		= "--coverage" "-lcriterion"

CC 			= "clang"

# NAMES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###
TEST_NAME 	= "unit_tests"

EPIC_NAME	= "epic_bin"

NAME 		= name

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- DEFAULT -----#
all:	$(NAME)

$(NAME): $(SRC_OBJ)
	$(MAKE) -C./lib/ --no-print-directory
	$(CC) $(LDFLAGS) -o $(NAME) $(SRC_OBJ) $(CFLAGS) $(LDLIBS)

clean: epiclean
	$(MAKE) -C./lib/ clean --no-print-directory
	find . -type f -name "*.gcno" -delete
	find . -type f -name "*.gcda" -delete
	find . -type f -name "*~" -delete
	find . -type f -name "*#" -delete
	find ./src/ -type f -name "*.o" -delete

fclean:	clean
	$(MAKE) -C./lib/ fclean --no-print-directory
	rm -f $(NAME) $(TEST_NAME)

re:	fclean all

#----- TESTS -----#
unit_tests: fclean
	$(CC) -o $(TEST_NAME) $(filter-out ./src/main.c, $(SRC)) $(LIB) $(TEST) $(CFLAGS) $(CPPFLAGS) $(CRIT)

test_run: unit_tests
	./$(TEST_NAME)

gcovr_run: test_run
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/
	$(MAKE) clean --no-print-directory

#----- BONUS -----#
run: all
	./$(NAME) $(ARGS)

epiclean:
	rm -f $(EPIC_NAME)
	find . -type f -name "*.pch" -delete

style_check:
	epiclang -o $(EPIC_NAME) $(SRC) $(LIB) $(CPPFLAGS)
	echo "[Epiclang Done]"
	$(MAKE) epiclean --no-print-directory

valgrind: re
	valgrind ./$(NAME) $(ARGS)

.SILENT: $(SRC_OBJ) $(NAME) all clean fclean re unit_tests test_run gcovr_run run epiclean style_check valgrind
.PHONY: all clean fclean re run unit_tests test_run gcovr_run epiclean style_check valgrind
