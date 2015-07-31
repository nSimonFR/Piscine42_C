/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 09:19:45 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/11 09:58:36 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		ft_putchar(char c)
{
	write (1,&c,1);
	return (0);
}

int main()
{
	int nbr;

	nbr = 34;
	printf("%d", nbr);
	ft_ft(&nbr);
	printf("%d", nbr);
	return(0);
}
