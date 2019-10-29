# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 23:34:45 by aymaatou          #+#    #+#              #
#    Updated: 2019/10/29 15:00:06 by aymaatou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_itoa.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	  ft_memset.c ft_putchar_fd.c  ft_putendl_fd.c ft_putnbr_fd.c  ft_putstr_fd.c  ft_split.c ft_strchr.c\
	  ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
	  ft_strncmp.c  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c\

NAME = libft.a 

all: $(NAME)

$(NAME):lib
	ar rc $(NAME) *.o
lib : *.c
	gcc -c -Wall -Werror -Wextra $(SRC)
clean :
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY : clean fclean re all $(NAME)
