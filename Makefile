SRC   	=	file1.c \
			main.c   

OBJ  	=	$(SRC:.c=.o)

NAME 	= 	manage

all: 	   $(NAME)

%.c: %.o
	gcc -c $^ 

$(NAME): 	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g3
clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: 	fclean all