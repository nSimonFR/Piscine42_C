/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrehin <ebrehin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 11:45:18 by ebrehin           #+#    #+#             */
/*   Updated: 2015/07/11 18:20:57 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int i);

void	ft_line1(int *x)
{
	int z;

	z = *x;
	if (z > 0)
	{
		ft_putchar('A');
		while (z > 1)
		{
			if (z == 2)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
			--z;
		}
	}
}

void	ft_line2(int *x)
{
	int	z;

	z = *x;
	if (z > 0)
	{
		ft_putchar('B');
		while (z > 1)
		{
			if (z == 2)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			--z;
		}
	}
}

void	ft_line3(int *x)
{
	int	z;

	z = *x;
	if (z > 0)
	{
		ft_putchar('C');
		while (z > 1)
		{
			if (z == 2)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
			--z;
		}
	}
}

int		colle(int x, int y)
{
	if (y > 0)
	{
		ft_line1(&x);
		ft_putchar('\n');
		while (y > 1)
		{
			if (y == 2)
			{
				ft_line3(&x);
				ft_putchar('\n');
			}
			else
			{
				ft_line2(&x);
				ft_putchar('\n');
			}
			--y;
		}
	}
	return (0);
}
