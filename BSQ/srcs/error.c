/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 13:19:32 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 20:59:47 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_error(char *str)
{
	if (!*ft_globale())
	{
		write(2, str, ft_strlen(str));
		write(2, "\n", 1);
		*ft_globale() = 1;
	}
}

char	*ft_safe_malloc(int lenght)
{
	char	*str;

	if (!(str = malloc(lenght * sizeof(char))))
		ft_error("Malloc Error");
	return (str);
}

int		*ft_safe_malloc_int(int lenght)
{
	int	*tab;

	if (!(tab = malloc(lenght * sizeof(int))))
		ft_error("Malloc Error");
	return (tab);
}

int		ft_safe_open(char *str, int right)
{
	int	fd;

	if ((fd = open(str, right)) == -1)
		ft_error("File Open Error");
	return (fd);
}

void	ft_safe_close(int fd)
{
	if (close(fd) == -1)
		ft_error("File Close Error");
}
