/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 10:16:27 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/24 14:47:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	if (a->left)
		btree_apply_infix(a->left, applyf);
	applyf(a->item);
	if (a->right)
		btree_apply_infix(a->right, applyf);
}
