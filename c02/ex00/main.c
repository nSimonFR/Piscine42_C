/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 13:15:16 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 23:15:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free(char **tab, int ok)
{
	int i;

	if (ok)
	{
		i = -1;
		while (tab[++i])
			free(tab[i]);
	}
	free(tab);
}

void	ft_test(char **tab, t_copy tab2)
{
	int	i;
	int	ok;
	int	k;

	ok = 0;
	i = 0;
	while (i <= 4)
	{
		ft_put_colle(i, &tab2);
		if (ft_tabcmp(tab, tab2.tab))
		{
			k = -1;
			ft_result(i, tab2.c, tab2.l, ok);
			ok = 1;
		}
		i++;
	}
	if (ok == 0)
		ft_putstr("aucune");
	if (tab2.c <= 1)
		ok = 0;
	ft_free(tab, ok);
	ft_free(tab2.tab, ok);
}

void	ft_result(int i, int x, int y, int ok)
{
	if (ok == 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr_rec(i);
	ft_putstr("] [");
	ft_putnbr_rec(y);
	ft_putstr("] [");
	ft_putnbr_rec(x);
	write(1, "]", 1);
}

void	ft_put_colle(int i, t_copy *tab2)
{
	tab2->x = 0;
	tab2->y = 0;
	if (i == 0)
		ft_colle00(tab2);
	else if (i == 1)
		ft_colle01(tab2);
	else if (i == 2)
		ft_colle02(tab2);
	else if (i == 3)
		ft_colle03(tab2);
	else if (i == 4)
		ft_colle04(tab2);
}

int		main(int ac, char **av)
{
	char	**tab;
	t_copy	tab2;

	if (ac == 1 && av[0])
	{
		tab = ft_read_file();
		if (tab[0][0])
		{
			tab2 = ft_count(tab);
			ft_test(tab, tab2);
		}
	}
	else
		ft_error("No arguments needed");
	write(1, "\n", 1);
	return (0);
}
