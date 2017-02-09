CC =	gcc -Wall -Werror -Wpedantic

NAME =	my_ls

SRC =	main.c			\
	Option/normal_ls.c	\
	lib/affichage.c		\
	Option/my_ls_d.c	\
	lib/my_strcmp.c		\
	Option/my_ls_a.c	\
	Option/my_ls_A.c        \
	lib/my_sort_in_tab.c

OBJ = 	$(SRC:%.c=%.o)

RM =	rm -f

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all	:
		$(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:
		$(RM) $(NAME) $(OBJ)

.PHONY	:	all clean fclean
