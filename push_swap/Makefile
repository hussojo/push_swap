# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 15:49:29 by jhusso            #+#    #+#              #
#    Updated: 2023/02/28 09:35:35 by jhusso           ###   ########.fr        #
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

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft_push_swap/
	# mv ./libft_push_swap/libft.a ./libft.a
	$(CC) -o $(NAME) $(BUILD_FLAGS) $(SRC) -I $(INCLUDE) -g -L./libft_push_swap -lft
	# -fsanitize=address


clean:
	$(RM) $(OBJ)
	make -C ./libft_push_swap clean

fclean: clean
	$(RM) $(NAME)
	make -C ./libft_push_swap fclean

re: fclean all


.PHONY: all clean fclean re
