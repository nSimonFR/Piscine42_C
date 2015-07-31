/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <bhamon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 15:41:56 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/20 14:00:44 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_malloc_tab(char *str, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			j++;
	tab = (char **)malloc(sizeof(char *) * (j + 2));
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			tab[j] = (char *)malloc(sizeof(char) * (k + 1));
			j++;
		}
		else
			k++;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	tab = ft_malloc_tab(str, tab);
	i = -1;
	j = 0;
	k = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		else
		{
			tab[j][k] = str[i];
			k++;
		}
	}
	tab[j][k] = '\0';
	*tab[j+1] = 0;
	return (tab);
}
