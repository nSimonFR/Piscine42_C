/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 15:07:30 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 22:16:07 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_analyse(char *file)
{
	t_map		dim;
	t_square	max;

	if (!(*ft_globale()))
		ft_init_w_c(file, &dim);
	if (!(*ft_globale()))
		ft_init_l(file, &dim);
	if (!(*ft_globale()))
		max = ft_count(file, dim);
	if (!(*ft_globale()))
		ft_print(file, max, dim);
}

void	ft_tmpfile(char *str)
{
	char	buf[BUFFER];
	int		fd;
	int		ret;

	fd = open(str, O_CREAT | O_WRONLY, 0777);
	if (fd == -1)
		ft_error("File error");
	if (!(*ft_globale()))
	{
		while ((ret = read(0, buf, BUFFER)))
			write(fd, buf, ret);
		write(fd, "\0", 1);
		ft_safe_close(fd);
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
		while (i < ac)
		{
			*ft_globale() = 0;
			ft_analyse(av[i++]);
		}
	else
	{
		ft_tmpfile(".tmp");
		ft_analyse(".tmp");
	}
}
