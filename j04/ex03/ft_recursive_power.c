/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 13:06:10 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 13:59:42 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
		{
			nb = 1;
		}
		if (power > 1)
		{
			nb = nb * ft_recursive_power(nb, power - 1);
		}
		return (nb);
	}
	else
		return (0);
}
