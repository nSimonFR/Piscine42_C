/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_functions2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 23:05:15 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:36:07 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "sudoku_functions.h"
#include "sudoku_functions2.h"

int		is_finished(t_grille a_grille)
{
	int ix;
	int iy;

	ix = 0;
	iy = 0;
	while (ix < 9)
	{
		iy = 0;
		while (iy < 9)
		{
			if (a_grille.cases[ix][iy].val == 0)
				return (0);
			iy++;
		}
		ix++;
	}
	return (1);
}

void	sudoku_print(t_grille a_grille)
{
	int ix;
	int iy;

	ix = 0;
	iy = 0;
	while (ix < 9)
	{
		iy = 0;
		while (iy < 9)
		{
			if (iy > 0)
				ft_putchar(' ');
			ft_putnbr(a_grille.cases[ix][iy].val);
			iy++;
		}
		ft_putchar('\n');
		ix++;
	}
}

t_grille	sudoku_initializer(int count, char **vals)
{
	t_grille	a_grille;
	int			ix;
	int			iy;

	ix = 1;
	iy = 0;
	while (ix < count)
	{
		iy = 0;
		while (iy < 9)
		{
			a_grille.cases[ix - 1][iy].val = ft_ctoi(vals[ix][iy]);
			a_grille.cases[ix - 1][iy].x = ix;
			a_grille.cases[ix - 1][iy].y = iy;
			iy++;
		}
		ix++;
	}
	return (a_grille);
}

void	sudoku_resolver(int count, t_grille a_g)
{
	int ix;
	int iy;
	int it;

	ix = -1;
	while (++ix < 9)
	{
		iy = -1;
		while (++iy < 9)
		{
			it = 0;
			while (it <= 9)
			{
				if (!line_c(a_g, it, ix) && !column_c(a_g, it, iy))
					if (!zone_c(a_g, it, ix, iy) && a_g.cases[ix][iy].val == 0)
						if (calculate_possibility(a_g, ix, iy) == 1)
							a_g.cases[ix][iy].val = it;
				it++;
			}
		}
	}
	if (!is_finished(a_g))
		sudoku_resolver(count, a_g);
	else
		sudoku_print(a_g);
}
