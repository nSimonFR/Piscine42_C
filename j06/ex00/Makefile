# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 18:03:41 by nsimon            #+#    #+#              #
#    Updated: 2015/07/21 18:32:41 by nsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

SRO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/

all: $(NAME)

$(NAME) :
	gcc -I $(INC) -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(SRO)
	ranlib $(NAME)

clean :
	/bin/rm -f $(SRO)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
