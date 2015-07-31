/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:14:11 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 20:18:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_space(char *str, int *pos)
{
	if (str[*pos - 1] != ' ')
	{
		str[*pos] = ' ';
		*pos = *pos + 1;
	}
}

int		ft_priorite(char a, char b)
{
	if ((a == '+' || a == '-') && (b == '%' || b == '/' || b == '*'))
		return (0);
	else
		return (1);
}

int		ft_if_ope(char c, char b, char d)
{
	if ((c == '%' || c == '-' || c == '+' || c == '*' || c == '/')
			&& b == ' ' && d == ' ')
		return (1);
	else
		return (0);
}

int		ft_solve(int n1, int n2, char ope)
{
	if (ope == '-')
		return (n1 - n2);
	if (ope == '+')
		return (n1 + n2);
	if (ope == '/')
		return (n1 / n2);
	if (ope == '*')
		return (n1 * n2);
	if (ope == '%')
		return (n1 % n2);
	return (0);
}

void	ft_free(char *str, char *pile)
{
	free(str);
	free(pile);
}
