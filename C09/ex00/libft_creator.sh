#!/bin/bash

CC='cc'
CFLAGS='-Wall -Wextra -Werror'

${CC} ${CFLAGS} -c ft_putchar.c
${CC} ${CFLAGS} -c ft_swap.c
${CC} ${CFLAGS} -c ft_putstr.c
${CC} ${CFLAGS} -c ft_strlen.c
${CC} ${CFLAGS} -c ft_strcmp.c

# Library itself
ar rcs libft.a *.o

# Cleaning
rm -f *.o
