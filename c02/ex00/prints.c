/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 21:16:36 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 23:13:52 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ft_error(char *c)
{
	int	i;

	i = -1;
	while (c[++i])
		write(2, &c[i], 1);
	return (1);
}

void	ft_putnbr_rec(int nb)
{
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr_rec(nb / 10);
		nb = nb % 10;
		ft_putchar(nb + '0');
	}
}

void	ft_printl(t_copy *tab2, char a, char b, char c)
{
	int i;

	i = 1;
	tab2->tab[tab2->x][tab2->y] = a;
	tab2->y = 1;
	while (i < tab2->l - 1)
	{
		tab2->tab[tab2->x][tab2->y] = b;
		tab2->y++;
		i++;
	}
	if (tab2->l != 1)
	{
		tab2->tab[tab2->x][tab2->y] = c;
		tab2->y++;
	}
	if (tab2->y != 2)
		tab2->tab[tab2->x][tab2->y] = '\0';
}
