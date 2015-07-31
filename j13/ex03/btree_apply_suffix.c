/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 10:16:27 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/24 21:34:33 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *a;

	a = root;
	if (a->left)
		btree_apply_suffix(a->left, applyf);
	if (a->right)
		btree_apply_suffix(a->right, applyf);
	applyf(a->item);
}
