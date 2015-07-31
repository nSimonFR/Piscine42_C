/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 20:14:39 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 20:15:03 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

int		ft_progress(char *tab);
void	print_space(char *str, int *pos);
int		ft_priorite(char a, char b);
int		ft_if_ope(char c, char b, char d);
int		ft_solve(int n1, int n2, char ope);
void	ft_free(char *str, char *pile);
int		eval_expr(char *str2);
int		ft_solve(int n1, int n2, char ope);
int		ft_if_ope(char c, char b, char d);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
