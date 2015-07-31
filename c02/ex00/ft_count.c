/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 10:16:03 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 22:21:46 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_copy	ft_count(char **tab)
{
	int		i;
	int		j;
	int		c;
	char	**tab2;
	t_copy	copy;

	i = -1;
	c = 0;
	j = 0;
	while (tab[++i] != 0)
	{
		while (tab[i][j] != '\0')
			j++;
		if (j > c)
			c = j;
		j = 0;
	}
	tab2 = malloc((i + 1) * sizeof(char *));
	while (j < i + 1)
		tab2[j++] = malloc((c + 1) * sizeof(char));
	copy.l = c;
	copy.c = i;
	copy.tab = tab2;
	return (copy);
}

int		ft_tabcmp(char **tab, char **tab2)
{
	int i;
	int j;
	int ok;

	i = 0;
	j = 0;
	ok = 1;
	while (tab[i] && tab2[i] && ok)
	{
		while (tab[i][j] && ok)
		{
			if (tab[i][j] != tab2[i][j])
				ok = 0;
			j++;
		}
		i++;
		j = 0;
	}
	return (ok);
}
