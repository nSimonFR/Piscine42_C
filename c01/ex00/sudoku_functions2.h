/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_functions2.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndoidi <ndoidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 23:06:31 by ndoidi            #+#    #+#             */
/*   Updated: 2015/07/19 23:34:10 by ndoidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_FUNCTIONS2_H
# define SUDOKU_FUNCTIONS2_H

int		is_finished(t_grille a_grille);
void	sudoku_print(t_grille a_grille);
t_grille	sudoku_initializer(int count, char **vals);
void	sudoku_resolver(int count, t_grille a_grille);

#endif
