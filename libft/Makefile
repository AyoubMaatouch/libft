# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 23:34:45 by aymaatou          #+#    #+#              #
#    Updated: 2019/10/23 20:04:38 by aymaatou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

all: $(NAME)

$(NAME):lib
	ar rc $(NAME) *.o
lib : *.c
	gcc -c -Wall -Werror -Wextra *.c
clean :
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
