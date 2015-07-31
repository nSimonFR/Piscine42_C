/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 10:16:27 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/24 14:47:26 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	applyf(a->item);
	if (a->left)
		btree_apply_prefix(a->left, applyf);
	if (a->right)
		btree_apply_prefix(a->right, applyf);
}
