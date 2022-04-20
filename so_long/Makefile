
CC          =   gcc
MINILIBX    =   minilibx/libmlx.a
LIBFT		=	include/libft/libft.a
LFLAGS      =   -framework OpenGL -framework AppKit -L./minilibx -lmlx
CFLAGS      =   -I./minilibx
NAME        =   so_long
SRC_DIR     =   src
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs
#Definition



#Directory

FTPRINT		=	main.c

FTSTR		=	put_image.c put_map.c rgb.c all_hook.c key.c

#FileCreate

SRC_FILES+=$(FTPRINT)
SRC_FILES+=$(FTSTR)

SRC 		= 	$(addsuffix .c, $(SRC_FILES))
OBJ 		= 	$(addsuffix .o, $(SRC_FILES))

all:			$(NAME)

%.o:%.c 
			@echo Compiling:
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo Compiling Success file is : $< $(SRC_FILES) $@ 

norm:
			@norminette $(SRC) | grep -v Norme -B1 || true
			@echo Norminatte exception

build:
			@gcc -Wall -Wextra -Werror $(LIBFT) $(LFLAGS) $(OBJS) *.c
			@echo Build ok

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo Libft compiled!

clean:
			@$(RM) -rf $(OBJ)
			@echo Libft objects files cleaned!

fclean:		clean
			@$(RM) -f $(NAME)
			@echo Libft executable files cleaned!

re:			fclean all
			@echo Cleaned and rebuilt

.PHONY:		all clean fclean re bonus norm