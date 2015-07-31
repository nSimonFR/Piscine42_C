/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 13:24:45 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 20:59:58 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_init_c(char *file, t_map *dim)
{
	char	*buf;
	int		fd;

	buf = ft_safe_malloc(dim->n + 1);
	fd = open(file, O_RDONLY);
	read(fd, buf, dim->n + 1);
	ft_safe_close(fd);
	dim->empty = buf[dim->n - 3];
	dim->obstcl = buf[dim->n - 2];
	dim->square = buf[dim->n - 1];
	buf[dim->n - 3] = '\0';
	dim->y = ft_atoi(buf);
	free(buf);
}

void	ft_init_w_c(char *file, t_map *dim)
{
	int		ret;
	char	buf[BUFFER];
	int		tmp;
	int		fd;

	tmp = 0;
	dim->n = 0;
	fd = ft_safe_open(file, O_RDONLY);
	while ((ret = read(fd, buf, BUFFER)) != -1)
	{
		if ((tmp = ft_cut(buf)))
			break ;
		dim->n += ret;
	}
	ft_safe_close(fd);
	dim->n += tmp;
	if (buf[dim->n] != '\n')
		ft_error("map error");
	if (!(*ft_globale()))
		ft_init_c(file, dim);
}

void	ft_init_l(char *file, t_map *dim)
{
	int		ret;
	int		tmp;
	char	buf[BUFFER];
	char	*buf2;
	int		fd;

	buf2 = ft_safe_malloc(dim->n + 1);
	fd = ft_safe_open(file, O_RDONLY);
	read(fd, buf2, dim->n + 1);
	free(buf2);
	dim->x = 0;
	while ((ret = read(fd, buf, BUFFER)) != -1)
	{
		if ((tmp = ft_cut(buf)))
			break ;
		dim->x += ret;
	}
	dim->x += tmp;
	if (buf[tmp] != '\n' && buf[tmp] != '\0')
		ft_error("map error");
	ft_safe_close(fd);
}
