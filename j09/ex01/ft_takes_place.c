/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 18:14:30 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 15:46:14 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_takes_place(int hour)
{
	int	h;

	h = hour % 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour % 24 == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour % 24 == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour % 24 == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour % 24 == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour % 24 <= 10)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, h + 1);
}
