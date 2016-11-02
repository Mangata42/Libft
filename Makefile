NAME = libft
FLAGS = -Wall -Wextra -Werror
SRC = ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c

OBJ = ft_memset.o \
		ft_memcpy.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

.PHONY: $(NAME) clean fclean re
