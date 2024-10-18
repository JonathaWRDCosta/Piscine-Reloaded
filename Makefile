# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 03:23:28 by jonathro          #+#    #+#              #
#    Updated: 2024/10/18 03:10:41 by jonathro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = main.c ft_putchar.c ex06/ft_print_alphabet.c ex07/ft_print_numbers.c ex08/ft_is_negative.c ex09/ft_ft.c ex10/ft_swap.c ex11/ft_div_mod.c ex12/ft_iterative_factorial.c ex13/ft_recursive_factorial.c ex14/ft_sqrt.c ex15/ft_putstr.c ex16/ft_strlen.c ex17/ft_strcmp.c ex20/ft_strdup.c ex21/ft_range.c 
OBJ = $(SRC:.c=.o)
EXEC = program

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(EXEC)

re: fclean all