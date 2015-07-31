# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjuniet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/25 16:57:05 by sjuniet           #+#    #+#              #
#    Updated: 2015/07/26 22:06:28 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CFLAGS = -Wall -Wextra -Werror

COLLES00 = ./ft_colle.c ./ft_count.c ./main.c ./ft_read_file.c ./prints.c

OBJS = ./ft_colle.o ./ft_count.o ./ft_read_file.o ./prints.o ./main.o

all : $(NAME)

$(NAME) :
	gcc $(CFLAGS) -c $(COLLES00)
	gcc -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
