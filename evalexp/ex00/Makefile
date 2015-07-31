# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/26 20:20:57 by nsimon            #+#    #+#              #
#    Updated: 2015/07/26 20:27:20 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = convert.c count.c fonctions.c print.c

SRO = convert.o count.o fonctions.o print.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(SRO)

clean :
	/bin/rm -f $(SRO)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
