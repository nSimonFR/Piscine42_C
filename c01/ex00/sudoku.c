/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 23:40:07 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:40:11 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"
#include "sudoku_functions.h"
#include "sudoku_functions2.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int i)
{
	ft_putchar('0' + i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_ctoi(char c)
{
	if (c != '.')
		return (c - 48);
	else
		return (c - 46);
}

int		main(int argc, char **argv)
{
	sudoku_resolver(argc, sudoku_initializer(argc, argv));
	return (0);
}
