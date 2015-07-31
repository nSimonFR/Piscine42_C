# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 18:03:41 by nsimon            #+#    #+#              #
#    Updated: 2015/07/23 15:49:07 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ./cat.c

TMP = ./cat.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(TMP)

clean :
	/bin/rm -f $(TMP)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
