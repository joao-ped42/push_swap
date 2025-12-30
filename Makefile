# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 02:30:30 by joao-ped          #+#    #+#              #
#    Updated: 2025/12/30 02:31:17 by joao-ped         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = 
HSRC = push_swap.h

.c: .o
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