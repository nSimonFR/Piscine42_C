/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 12:59:41 by namhed-m          #+#    #+#             */
/*   Updated: 2015/07/26 22:28:45 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_colle00(t_copy *tab)
{
	int l;

	if (tab->c > 0 && tab->l > 0)
	{
		l = 2;
		ft_printl(tab, 'o', '-', 'o');
		tab->x = 1;
		while (l < tab->c)
		{
			tab->y = 0;
			ft_printl(tab, '|', ' ', '|');
			tab->x++;
			l++;
		}
		tab->y = 0;
		if (tab->c != 1)
			ft_printl(tab, 'o', '-', 'o');
	}
	if (tab->x != 1)
		tab->tab[tab->x + 1] = 0;
}

void	ft_colle01(t_copy *tab)
{
	int l;

	if (tab->c > 0 && tab->l > 0)
	{
		l = 2;
		ft_printl(tab, '/', '*', '\\');
		tab->x = 1;
		while (l < tab->c)
		{
			tab->y = 0;
			ft_printl(tab, '*', ' ', '*');
			tab->x++;
			l++;
		}
		tab->y = 0;
		if (tab->c != 1)
			ft_printl(tab, '\\', '*', '/');
	}
	if (tab->x != 1)
		tab->tab[tab->x + 1] = 0;
}

void	ft_colle02(t_copy *tab)
{
	int l;

	if (tab->c > 0 && tab->l > 0)
	{
		l = 2;
		ft_printl(tab, 'A', 'B', 'A');
		tab->x = 1;
		while (l < tab->c)
		{
			tab->y = 0;
			ft_printl(tab, 'B', ' ', 'B');
			tab->x++;
			l++;
		}
		tab->y = 0;
		if (tab->c != 1)
			ft_printl(tab, 'C', 'B', 'C');
	}
	if (tab->x != 1)
		tab->tab[tab->x + 1] = 0;
}

void	ft_colle03(t_copy *tab)
{
	int l;

	if (tab->c > 0 && tab->l > 0)
	{
		l = 2;
		ft_printl(tab, 'A', 'B', 'C');
		tab->x = 1;
		while (l < tab->c)
		{
			tab->y = 0;
			ft_printl(tab, 'B', ' ', 'B');
			tab->x++;
			l++;
		}
		tab->y = 0;
		if (tab->c != 1)
			ft_printl(tab, 'A', 'B', 'C');
	}
	if (tab->x != 1)
		tab->tab[tab->x + 1] = 0;
}

void	ft_colle04(t_copy *tab)
{
	int l;

	if (tab->c > 0 && tab->l > 0)
	{
		l = 2;
		ft_printl(tab, 'A', 'B', 'C');
		tab->x = 1;
		while (l < tab->c)
		{
			tab->y = 0;
			ft_printl(tab, 'B', ' ', 'B');
			tab->x++;
			l++;
		}
		tab->y = 0;
		if (tab->c != 1)
			ft_printl(tab, 'C', 'B', 'A');
	}
	if (tab->x != 1)
		tab->tab[tab->x + 1] = 0;
}
