/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 22:40:40 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:39:54 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

typedef	struct	s_acase
{
	int x;
	int y;
	int val;
}				t_case;

typedef	struct	s_grille
{
	t_case		cases[9][9];
	int			grille_size;
}				t_grille;

void			ft_putchar(char c);
void			ft_putnbr(int i);
int				ft_strlen(char *str);
int				ft_ctoi(char c);

#endif
