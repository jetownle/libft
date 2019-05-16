# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jetownle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/13 20:49:38 by jetownle          #+#    #+#              #
#    Updated: 2019/05/15 18:39:47 by jetownle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I *.c *.h
	ar -r libft.a *.o
	ranlib libft.a

clean:
	rm -rf *.o
	rm -rf libft.h.gch

fclean: clean
	rm -rf libft.a

re: fclean all
