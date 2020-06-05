# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymaatou <aymaatou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 23:34:45 by aymaatou          #+#    #+#              #
#    Updated: 2019/11/01 17:11:22 by aymaatou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ./library/*.c

NAME = libft.a 

all: $(NAME)

$(NAME): 
	gcc -c -Wall -Werror -Wextra $(SRC) 
	ar rc $(NAME) *.o 
	$(info *********Your Libft is Ready*********)
clean :
	rm -rf *.o
	$(info !!!!!!!!!! Deleting object files !!!!!!!!!!)
fclean: clean
	rm -rf $(NAME)
	$(info !!!!!!!!!! Deleting all files !!!!!!!!!!)
re: fclean all

.PHONY : all clean fclean re $(NAME)
.SILENT: all clean fclean re $(NAME)
