/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 15:04:41 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 15:05:39 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_square
{
	int x;
	int y;
	int n;
}				t_square;

typedef struct	s_map
{
	int		x;
	int		y;
	int		n;
	char	empty;
	char	square;
	char	obstcl;
}				t_map;

#endif
