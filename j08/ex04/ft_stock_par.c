/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 15:34:40 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/21 16:51:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i++])
		;
	p = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i + 1] = '\0';
	return (p);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*a;
	int			i;

	a = malloc((ac + 1) * sizeof(t_stock_par));
	while (i < ac)
	{
		a[i].size_param = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		a[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	a[ac].str = 0;
	return (a);
}
