/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 22:12:31 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/23 22:35:54 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*a;

	a = *begin_list;
	if (a->next == NULL)
	{
		free(a);
	}
	ft_list_clear(&a->next);
	free(a);
}
