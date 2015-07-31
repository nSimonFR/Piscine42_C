/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 21:58:11 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/23 22:11:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*a;
	t_list	*begin;
	int		i;

	if (ac >= 0)
	{
		i = 1;
		a = ft_create_elem(av[0]);
		begin = a;
		while (i < ac)
		{
			a->next = ft_push_back(av[i]);
			a = a->next;
			i++;
		}
		return (begin);
	}
	return (0);
}
