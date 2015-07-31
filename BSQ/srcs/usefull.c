/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 14:44:56 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 22:21:03 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	*ft_globale(void)
{
	static int	globale;

	return (&globale);
}

int	ft_atoi(char *str)
{
	int res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	if (*str != '\0')
		ft_error("map error");
	return (res);
}

int	ft_cut(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && i < BUFFER)
		i++;
	if (i == BUFFER)
		return (0);
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
