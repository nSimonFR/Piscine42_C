# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/23 23:02:13 by nsimon            #+#    #+#              #
#    Updated: 2015/07/23 23:08:30 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME) = ft_hexdump

$(SRC) = main.c

$(SRO) = main.o

$(NAME) : all

all :
	alias ./ft_hexdump=hexdump
	gcc -c $(SRC)
	gcc -o $(NAME) $(SRC)

clean :
	rm -f $(SRO)

fclean : 
	rm -f $(NAME)

re : fclean all
