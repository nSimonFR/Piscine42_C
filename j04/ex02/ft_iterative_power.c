/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 13:40:01 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 18:01:42 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int p;
	int n;

	p = 0;
	n = nb;
	if (power >= 0)
	{
		if (power == 0)
		{
			n = 1;
		}
		while (p < power)
		{
			n = n * nb;
			p++;
		}
		return (n);
	}
	else
		return (0);
}
