NAME = libft.a

HEADER = libft.h

SRC = 	ft_isalpha.c \
      	ft_isdigit.c \
	  	ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC) $(HEADER)

run:	cmp
	./a

cmp:
	$(CC) $(FLAGS) $(SRC) ./main.c -o a

clean:
	rm -rf $(OBJ) ./a

fclean: clean
	rm -rf $(NAME)

re:	fclean all
