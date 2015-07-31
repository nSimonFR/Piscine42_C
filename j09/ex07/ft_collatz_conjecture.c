/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 00:47:13 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 01:51:43 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base)
{
	unsigned int n;
	unsigned int i;

	n = base % 2;
	if (n != 1)
	{
		base = base / 2;
		i = ft_collatz_conjecture(base);
		i++;
	}
	else if (base <= 1)
	{
		i = 0;
	}
	else
	{
		base = 3 * base + 1;
		i = ft_collatz_conjecture(base);
		i++;
	}
	return (i);
}
