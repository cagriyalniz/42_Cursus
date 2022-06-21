# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 13:37:23 by cyalniz           #+#    #+#              #
#    Updated: 2022/06/21 12:14:41 by cyalniz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

CFILES = ft_lst_functions.c main.c kontrolislemleri.c \
		ft_swap_op.c ft_push_op.c ft_rot_op.c ft_rev_rot_op.c \
		ft_checks.c

OBJECTS = $(CFILES:.c=.o)

LIBFT = ./libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

