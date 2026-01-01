# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 02:30:30 by joao-ped          #+#    #+#              #
#    Updated: 2026/01/01 02:54:59 by joao-ped         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c single_string_treatment.c make_it_int operations.c more_operations.c push.c rotate.c rev_rotate.c swap.c
HSRC = push_swap.h

%.c: %.o
	$(CC) $(FLAGS) -I$(HSRC) -c $< -o$@

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)