# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 15:49:29 by jhusso            #+#    #+#              #
#    Updated: 2023/03/04 16:44:02 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft_push_swap
INCLUDE = ./libft_push_swap/libft.h

SRC =	push_swap.c push_swap_utils.c work_stack.c work_binaries.c push_op.c \
		sort_op.c array_utils.c sort_under_six.c

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft_push_swap/
	$(CC) -o $(NAME) $(BUILD_FLAGS) $(SRC) -I $(INCLUDE) -g -L./libft_push_swap -lft
	# -fsanitize=address


clean:
	$(RM) $(OBJ)
	make -C ./libft_push_swap clean

fclean: clean
	$(RM) $(NAME)
	make -C ./libft_push_swap fclean

re: fclean all
