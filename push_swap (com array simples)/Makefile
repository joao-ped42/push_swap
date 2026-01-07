# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 02:30:30 by joao-ped          #+#    #+#              #
#    Updated: 2026/01/05 00:44:27 by joao-ped         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
FLAGS = -Wall -Wextra -Werror -I.
SRCS = push_swap.c single_string_treatment.c make_it_int.c operations.c push.c rotate.c rev_rotate.c swap.c sorting_small.c push_swap_utils.c algorithms.c

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make
	make clean

.PHONY: all clean fclean re