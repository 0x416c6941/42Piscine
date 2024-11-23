# Compiler options.
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files.
SRC_FILES = ft_print_file.c lib_stdio.c lib_string.c main.c

# Object files.
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))

# Dependency files.
DEP_FILES = $(patsubst %.c,%.d,$(SRC_FILES))

# Name of the resulting binary file.
BIN = ft_cat

# Targets.
all: $(BIN)

$(BIN): $(OBJ_FILES)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEP_FILES)

.PHONY: clean
clean:
	rm -f $(OBJ_FILES) $(DEP_FILES)

.PHONY: fclean
fclean: clean
	rm -f $(BIN)
