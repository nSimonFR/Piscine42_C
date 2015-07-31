# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/30 16:47:36 by nsimon            #+#    #+#              #
#    Updated: 2015/07/30 22:14:04 by bhamon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILE = error.c init.c print.c square_max.c main.c usefull.c

SRO = $(FILE:.c=.o)

SRC = $(addprefix srcs/, $(FILE))

INC = -Iincludes/

FLAGS = -Wall -Wextra -Wextra -g

all: $(NAME)

$(NAME):
	gcc -c $(INC) $(SRC)
	gcc -o $(NAME) $(SRO)

clean:
	rm -f $(SRO)

fclean: clean
	rm -f $(NAME)

re: fclean all
