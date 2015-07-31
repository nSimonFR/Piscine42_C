/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 11:14:24 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/23 22:53:34 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list, unsigned int nbr)
{
	t_list	*a;

	a = begin_list;
	while (a->next != NULL && nbr--)
		a = a->next;
	return (a);
}
