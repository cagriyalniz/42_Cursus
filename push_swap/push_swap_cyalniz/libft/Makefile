NAME	= libft

SRC	=	ft_atoi.c ft_isdigit.c ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c\
	ft_lstlast.c \
	ft_lstadd_back.c \

INC	= libft.h
OBJ	= $(SRC:.c=.o)

CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME).a $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME).a

re: fclean all

bonus: $(OBJ)
	ar -rcs $(NAME).a $(OBJ)


.PHONY:			all, clean, fclean, re
