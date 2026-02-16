##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Universal Skaralotra library Makefile
##

#----- FILES -----#
LIB		:= $(shell find . -type f -name "*.c")

LIB_OBJ	 = $(LIB:.c=.o)

LIB_NAME = libmy.a

#----- FLAG -----#
CFLAGS = "-Wall" "-Wextra" "-g3"

CPPFLAGS = "-I./include/" $(shell find . -mindepth 1 -type d -printf "-I./%f/ ")

# RULES	 ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###

#----- DEFAULT -----#
all:	$(LIB_NAME)

$(LIB_NAME): $(LIB_OBJ)
	$(AR) rc $(LIB_NAME) $(LIB_OBJ)

clean:
	find . -type f -name "*.o" -delete

fclean:	clean
	rm -f $(LIB_NAME)

re:	fclean all

.SILENT: all clean fclean re $(LIB_NAME) $(LIB_OBJ)
.PHONY: all clean fclean re
