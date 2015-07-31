# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 10:27:49 by nsimon            #+#    #+#              #
#    Updated: 2015/07/22 20:01:17 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ./main.c ./ope.c

TMP = ./main.o ./ope.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) $(TMP)

clean:
	/bin/rm -f $(TMP)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
