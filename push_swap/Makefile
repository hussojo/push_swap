# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 15:49:29 by jhusso            #+#    #+#              #
#    Updated: 2023/02/18 14:56:39 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpushswap.a
CC = cc
RM = rm -f
BUILD_FLAGS = -Wall -Wextra -Werror
LIBFT = ./libft_push_swap
INCLUDE = ./libft_push_swap/libft.h

SRC =	push_swap.c push_swap_utils.c work_stack.c work_binaries.c push_op.c

OBJ = $(SRC:.c=.o)

H_FILES = push_swap.h

all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft_push_swap/ all
	mv ./libft_push_swap/libft.a ./$(NAME)
	$(CC) -c $(BUILD_FLAGS) $(SRC) -I $(INCLUDE) -g
	ar rus $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	cd $(LIBFT) && $(MAKE) clean -libft_push_swap

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFT) && $(MAKE) fclean

re: fclean all


.PHONY: all clean fclean re $(LIBFT)
