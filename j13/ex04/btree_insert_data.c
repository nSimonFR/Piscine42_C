/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 10:16:27 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/24 15:09:56 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *a;

	a = root;
	if (cmpf(a->item, item)i > 0)
		btree_apply_suffix(a->right, applyf);
	else if
		btree_apply_suffix(a->right, applyf);
	else
		
	applyf(a->item);
}
