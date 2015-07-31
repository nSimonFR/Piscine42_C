/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 22:47:05 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:35:07 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "sudoku_functions.h"
#include "sudoku_functions2.h"

int		find_at_pos(t_grille a_grille, int x, int y)
{
	return (a_grille.cases[y][x].val);
}

int		line_c(t_grille a_grille, int c, int y)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (a_grille.cases[y][i].val == c)
			return (1);
		i++;
	}
	return (0);
}

int		column_c(t_grille a_grille, int c, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (a_grille.cases[i][x].val == c)
			return (1);
		i++;
	}
	return (0);
}

int		zone_c(t_grille a_grille, int c, int x, int y)
{
	int ix;
	int iy;

	ix = ((x / 3) * 3) + 1;
	iy = ((y / 3) * 3) + 1;
	while (ix < 3)
	{
		while (iy < 3)
		{
			if (a_grille.cases[ix][iy].val == c)
				return (1);
			iy++;
		}
		ix++;
	}
	return (0);
}

int		calculate_possibility(t_grille grid, int x, int y)
{
	int ite;
	int possibility;

	ite = 9;
	possibility = 0;
	while (ite > 0)
	{
		if (!line_c(grid, ite, x) && !column_c(grid, ite, y))
			if (!zone_c(grid, ite, x, y) && grid.cases[x][y].val == 0)
			{
				possibility++;
			}
		ite--;
	}
	if (possibility)
		return (possibility);
	return (0);
}
