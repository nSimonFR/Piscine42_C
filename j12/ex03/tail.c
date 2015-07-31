/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 15:06:14 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/27 17:16:13 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_tail(char *av, int n)
{
	int		file;
	int		ret;
	char	buf[2];
	int		i;

	i = -1;
	file = open(av, O_RDONLY);
	while ((ret = read(file, buf, 1)))
	{
		if (++i < n)
			;
		else
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	if (close(file) == -1)
		return (ft_error("close() error"));
	buf[ret] = '\0';
	return (0);
}

int		ft_head(char *av, int n)
{
	int		file;
	int		ret;
	char	buf[2];
	int		i;

	i = -1;
	file = open(av, O_RDONLY);
	while ((ret = read(file, buf, 1)))
	{
		if (++i > n)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	if (close(file) == -1)
		return (ft_error("close() error"));
	buf[ret] = '\0';
	return (0);
}

int		ft_count(char *c)
{
	int		file;
	int		i;
	char	buf[2];
	int		ret;

	i = 0;
	file = open(c, O_RDONLY);
	if (file == -1)
		return (ft_error("open() failed"));
	while ((ret = read(file, buf, 1)))
		i++;
	if (close(file) == -1)
		return (ft_error("close() error"));
	return (i);
}

void	ft_n(char **av, int n, int i)
{
	int o;

	o = ft_count(av[i]);
	n = o - n;
	ft_tail(av[i], n);
}

int		main(int ac, char **av)
{
	int n;
	int i;
	int ok;

	ok = 0;
	i = 2;
	if (ac > 2 && av[1][0] == '-' && (av[1][1] == 'c' || av[1][1] == 'c')
			&& av[1][2] == '\0' && ((av[2][0] >= '0' && av[2][0] <= '9')
				|| av[2][0] == '-' || av[2][0] == '+'))
	{
		n = ft_atoi(av[2]);
		if (av[2][0] == '+')
			ok = 1;
		if (ok == 0)
			while (++i < ac)
				ft_n(av, n, i);
		else
			while (++i < ac)
				ft_head(av[i], n);
	}
	else
		return (ft_error("Utilisation: ./ft_tail -c N"));
	return (0);
}
