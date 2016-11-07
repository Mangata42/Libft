# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 11:05:43 by nghaddar          #+#    #+#              #
#    Updated: 2016/11/07 18:48:31 by nghaddar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c

OBJ = ft_memset.o \
		ft_memcpy.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_putchar.o \
		ft_putstr.o \
		ft_strlen.o \
		ft_strdup.o \
		ft_strcpy.o \
		ft_strncpy.o \
		ft_strcat.o \
		ft_strncat.o \
		ft_strlcat.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strstr.o \
		ft_strnstr.o

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)
	@echo "Libft - Compilation Done"

clean:
	rm -rf $(OBJ)
	@echo "Libft - Clean Done"

fclean: clean
	rm -rf $(NAME)
	@echo "Libft - Fclean Done"

re: fclean all
	@echo "Libft - Re Done"

all: $(NAME)

.PHONY: $(NAME) clean fclean re
