/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:20:56 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 17:18:00 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
		{
			nb = 1;
		}
		if (nb > 1)
		{
			nb = nb * ft_recursive_factorial(nb - 1);
		}
		return (nb);
	}
	else
		return (0);
}
