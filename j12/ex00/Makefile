# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 18:03:41 by nsimon            #+#    #+#              #
#    Updated: 2015/07/28 16:02:28 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./display_file.c

TMP = ./display_file.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(TMP)

clean :
	/bin/rm -f $(TMP)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
