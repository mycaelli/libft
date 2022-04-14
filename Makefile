NAME = libft.a

PATH_INCLUDES = -I ./

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
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_strncmp.c \
        ft_strnstr.c \
        ft_bzero.c \
        ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c

OBJ = $(SRC:.c=.o)

CFLAGS = -g3 -Wall -Wextra -Werror

CC = cc

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	$(CC) -c $(CFLAGS) $(PATH_INCLUDES) $(SRC)

run:	cmp
	./a

cmp:
	$(CC) $(CFLAGS) $(SRC) -lbsd ./main.c -o a

clean:
	rm -rf $(OBJ) ./a

fclean: clean
	rm -rf $(NAME)

re:	fclean all
