/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 09:08:14 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/23 21:47:03 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *a;

	a = malloc(sizeof(t_list));
	if (a)
	{
		a->data = data;
		a->next = NULL;
	}
	return (a);
}
