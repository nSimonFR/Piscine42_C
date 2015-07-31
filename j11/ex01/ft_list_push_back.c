/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 09:35:51 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/23 22:10:24 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *a;

	if (*begin_list == 0)
		a = ft_create_elem(data);
	else
	{
		a = *begin_list;
		while (a->next != NULL)
			a = a->next;
		a->next = ft_create_elem(data);
	}
}
