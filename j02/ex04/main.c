/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 12:04:47 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/10 14:52:02 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void);

int		ft_putchar (char c)
{
	write (1,&c,1);
	return (0);
}

int main()
{
	ft_print_comb();
	return(0);
}
