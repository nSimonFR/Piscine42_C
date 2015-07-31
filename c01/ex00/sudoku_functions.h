/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 23:01:54 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:30:35 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_FUNCTIONS_H
# define SUDOKU_FUNCTIONS_H

int		find_at_pos(t_grille a_grille, int x, int y);
int		line_c(t_grille a_grille, int c, int y);
int		column_c(t_grille a_grille, int c, int x);
int		zone_c(t_grille a_grille, int c, int x, int y);
int		calculate_possibility(t_grille a_grille, int x, int y);

#endif
