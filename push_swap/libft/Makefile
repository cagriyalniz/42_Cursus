NAME	= libft

SRC	= ft_strlen.c \
		  ft_strchr.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_atoi.c \
		  ft_bzero.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_memset.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memcmp.c \
		  ft_memchr.c \
		  ft_strdup.c \
		  ft_calloc.c \
		  ft_strnstr.c\
		  ft_substr.c \
		  ft_striteri.c \
	      ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c
INC		= libft.h
OBJ	= $(SRC:.c=.o)

BONUS= ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c\
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c
B_OBJ	= $(BONUS:.c=.o)


CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME).a $(OBJ)

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
	$(RM) $(NAME).a

re: fclean all

bonus:			$(OBJ)	$(B_OBJ)
					ar -rcs $(NAME).a $(OBJ) $(B_OBJ)


.PHONY:			all, clean, fclean, re
