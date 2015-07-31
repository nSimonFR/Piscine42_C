/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 19:53:56 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 23:18:31 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb <= 0)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int a;

	if (nb > 2)
	{
		a = ft_is_prime(nb);
		if (a == 1)
			return (nb);
		else
			return (ft_find_next_prime(nb + 1));
	}
	else
		return(2);
}
