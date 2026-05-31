# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etoktona <etoktona@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/09 18:06:28 by rashaban          #+#    #+#              #
#    Updated: 2025/12/20 14:43:12 by etoktona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_print.c \
	  ft_print_char.c \
	  ft_print_str.c \
	  ft_print_hex.c \
	  ft_print_nbr.c \
	  ft_print_ptr.c \
	  ft_print_unsigned.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

test: all
	gcc main_printf.c $(NAME) -o test
	./test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test