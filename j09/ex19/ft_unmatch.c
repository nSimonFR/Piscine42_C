/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 13:07:02 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 15:21:13 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_unmatch(int *tab, int length)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < length)
	{
		while ((n < length) && (tab[i] != tab[n]))
		{
			if (i != n + 1)
				n++;
			else
				n += 2;
		}
		if (tab[i] != tab[n])
			return (tab[i]);
		i++;
		n = 0;
	}
	return (0);
}
