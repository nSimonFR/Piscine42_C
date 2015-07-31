/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 15:13:50 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 22:17:47 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

static inline void	ft_add(char *buf, int *compteur, t_map dim)
{
	int	i;

	i = 0;
	while (i < dim.x)
	{
		if (buf[i] == dim.empty)
			compteur[i]++;
		else if (buf[i] == dim.obstcl)
			compteur[i] = 0;
		else
			ft_error("map error");
		i++;
	}
	if (buf[dim.x] != '\n')
		ft_error("map error");
}

static inline void	ft_extend(int *compteur, t_square *max, t_map dim, int c)
{
	int	i;
	int j;
	int min;

	i = -1;
	while (++i < dim.x)
		if (compteur[i] > max->n)
		{
			j = -1;
			min = compteur[i];
			while (++j <= min && min > max->n)
				if (compteur[j + i] < min)
					min = compteur[j + i];
			if (j - 1 > max->n)
			{
				max->n = j - 1;
				max->x = i;
				max->y = c - (j - 2);
				dim.x -= max->n;
			}
		}
}

t_square			ft_count2(int *compteur, char *buf, t_map dim, int *fd)
{
	int			i;
	t_square	max;

	max.n = 0;
	i = -1;
	while (++i < dim.y)
	{
		if (!(*ft_globale()))
			read(*fd, buf, dim.x + 1);
		if (!(*ft_globale()))
			ft_add(buf, compteur, dim);
		if (!(*ft_globale()))
			ft_extend(compteur, &max, dim, i);
	}
	return (max);
}

t_square			ft_count(char *file, t_map dim)
{
	int			i;
	char		*buf;
	int			fd;
	int			*compteur;

	buf = ft_safe_malloc(dim.n + 1);
	fd = ft_safe_open(file, O_RDONLY);
	read(fd, buf, dim.n + 1);
	free(buf);
	buf = ft_safe_malloc(dim.x + 1);
	compteur = ft_safe_malloc_int(dim.x);
	i = 0;
	while (i < dim.x)
		compteur[i++] = 0;
	return (ft_count2(compteur, buf, dim, &fd));
}
