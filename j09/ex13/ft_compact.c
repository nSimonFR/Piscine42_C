/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 09:59:53 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 12:07:35 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_sort(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i != length - 1)
	{
		if (tab[i] == 0)
		{
			j = i;
			while (j < length - 1)
			{
				tab[j] = tab[j + 1];
				j++;
			}
			i = 0;
		}
		i++;
	}
}

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	ft_sort(tab, length);
	i = 0;
	j = 0;
	while (i < length)
	{
		if (tab[i] == 0)
			j++;
		i++;
	}
	i = j;
	return (length - i);
}
