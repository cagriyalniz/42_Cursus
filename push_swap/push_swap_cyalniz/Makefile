# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyalniz <cyalniz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 13:37:23 by cyalniz           #+#    #+#              #
#    Updated: 2022/06/27 16:10:29 by cyalniz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

CFILES = ft_lst_functions.c main.c \
		./opert/ft_swap_op.c ./opert/ft_push_op.c ./opert/ft_rot_op.c ./opert/ft_rev_rot_op.c \
		./small/ft_sort_three.c push_swap.c ./small/ft_sort_four.c ./small/ft_sort_five.c \
		./small/ft_push_small.c ft_checks.c

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
