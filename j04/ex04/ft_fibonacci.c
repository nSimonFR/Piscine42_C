/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 14:07:40 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 21:26:15 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int n;

	if (index >= 0)
	{
		if (index == 0)
		{
			n = 0;
		}
		else if (index == 1 || index == 2)
		{
			n = 1;
		}
		else
		{
			n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		}
		return (n);
	}
	else
		return (-1);
}
