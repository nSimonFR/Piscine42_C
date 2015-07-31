/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 18:38:26 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/22 13:12:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (*new);
}
