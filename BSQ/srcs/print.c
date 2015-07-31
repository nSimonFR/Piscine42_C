/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 13:58:02 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 21:00:24 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_print_bfr(int *ret, int *y, t_square max, t_map dim)
{
	char	buf[dim.x + 1];

	while (*y < max.y)
	{
		read(*ret, buf, dim.x + 1);
		write(1, buf, dim.x + 1);
		(*y)++;
	}
}

void	ft_print_sqr(int *ret, int *y, t_square max, t_map dim)
{
	char	buf[dim.x + 1];
	int		x;

	while (*y < max.y + max.n)
	{
		read(*ret, buf, max.x);
		write(1, buf, max.x);
		read(*ret, buf, max.n - 1);
		x = 0;
		while (++x <= max.n)
			write(1, &dim.square, 1);
		read(*ret, buf, 1);
		if (buf[0] == '\n')
			write(1, "\n", 1);
		read(*ret, buf, (dim.x - max.n - max.x + 1));
		write(1, buf, (dim.x - max.n - max.x + 1));
		(*y)++;
	}
}

void	ft_print_aft(int *ret, int *y, t_map dim)
{
	char	buf[dim.x + 1];

	while (*y < dim.y)
	{
		read(*ret, buf, dim.x + 1);
		write(1, buf, dim.x + 1);
		(*y)++;
	}
}

void	ft_print(char *file, t_square max, t_map dim)
{
	int		y;
	char	buf[dim.x + 1];
	int		ret;

	y = 0;
	ret = open(file, O_RDONLY);
	read(ret, buf, dim.n + 1);
	ft_print_bfr(&ret, &y, max, dim);
	ft_print_sqr(&ret, &y, max, dim);
	ft_print_aft(&ret, &y, dim);
}
