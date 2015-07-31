/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 17:13:42 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 20:19:57 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_itoa2(int j, int result, int i, char *tab)
{
	int k;
	int tmp;

	k = 0;
	while (j != 0)
	{
		if (j != 1)
			tmp = result / j % 10;
		else
			tmp = result % 10;
		j /= 10;
		tab[i + k] = tmp + '0';
		k++;
	}
}

void	ft_itoa(char *tab, int i, int result)
{
	int j;
	int tmp;
	int	abs;

	j = 1;
	abs = 0;
	tmp = result;
	i++;
	if (result)
	{
		if (result < 0)
		{
			result *= -1;
			tab[i++] = '-';
		}
		while (tmp != 0)
		{
			tmp /= 10;
			j *= 10;
		}
		j /= 10;
		ft_itoa2(j, result, i, tab);
	}
	else
		tab[i] = '0';
}

int		ft_calc_ab(char *tab, int *i)
{
	int result;
	int b;

	result = 1;
	b = 0;
	while (tab[*i] == ' ')
		*i = *i - 1;
	while (tab[*i] >= '0' && tab[*i] <= '9')
	{
		b += (tab[*i] - '0') * result;
		result *= 10;
		tab[*i] = ' ';
		*i = *i - 1;
	}
	if (tab[*i] == '-')
	{
		b *= -1;
		tab[*i] = ' ';
		*i = *i - 1;
	}
	return (b);
}

int		ft_progress(char *tab)
{
	int result;
	int i;
	int ope;
	int a;
	int b;

	i = 0;
	while (tab[++i] != '\0')
	{
		if (ft_if_ope(tab[i], tab[i - 1], tab[i + 1]) == 1)
		{
			result = 1;
			ope = tab[i];
			tab[i--] = ' ';
			a = ft_calc_ab(tab, &i);
			b = ft_calc_ab(tab, &i);
			result = ft_solve(b, a, ope);
			ft_itoa(tab, i, result);
		}
	}
	free(tab);
	return (result);
}
