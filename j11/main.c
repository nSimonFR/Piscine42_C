/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 10:02:33 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/22 10:14:16 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void    pr_list(t_list *list)
{
	t_list    *l_act;
	int        i;

	printf("_______________________________________________________\n");
	i = 0;
	l_act = list;
	while (l_act != NULL)
	{
		printf("L'element numero %d, situe a l'adresse %p, a pour contenu:\n", i, l_act);
		printf("\tdata: %s, next: %p.\n", l_act->data, l_act->next);
		l_act = l_act->next;
		i++;
	}
}

int main ()
{
	pr_list(ft_list_push_back(t_list **begin_list, void *data))
}
