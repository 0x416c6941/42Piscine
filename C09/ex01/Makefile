# Source files (wildcard shouldn't be used!).
SRC_DIR = srcs/
SRC_FILES = $(addprefix $(SRC_DIR),\
	    ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

# Header files (only one file actually :p).
HEADER_DIR = includes
HEADER_FILES = $(addprefix $(HEADER_DIR),ft.h)

# Object files.
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))

# Compiler options.
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)

# Name of the resulting binary file / library.
OUT = libft.a

# Targets.
.PHONY: all
all: $(OUT)

$(OUT): $(OBJ_FILES)
	ar rcs $(OUT) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJ_FILES)

# "Your makefile should not run any unneccessary command",
# therefore it cannot depend on clean, everything needs to be removed at once.
.PHONY: fclean
fclean:
	rm -f $(OBJ_FILES) $(OUT)

.PHONY: re
re: fclean all
