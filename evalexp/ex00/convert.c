/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:13:07 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 20:13:36 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_if(char *str, char *sortie, char *pile, int c[3])
{
	if (c[2] == 0)
		pile[c[2]++] = str[c[0]];
	else if (pile[c[2] - 1] == '(')
		pile[c[2]++] = str[c[0]];
	else if ((pile[c[2] - 1] == 43 || pile[c[2] - 1] == 45) && (str[c[0]] == '*'
				|| str[c[0]] == '%' || str[c[0]] == '/'))
		pile[c[2]++] = str[c[0]];
	else
	{
		sortie[c[1]++] = pile[c[2] - 1];
		c[2]--;
		while (c[2] > 0 && ft_priorite(pile[c[2] - 1], str[c[0]])
				&& pile[c[2]] != '(')
		{
			print_space(sortie, &c[1]);
			sortie[c[1]++] = pile[--c[2]];
		}
		if (pile[c[2]] == '(')
			c[2]--;
		pile[c[2]] = str[c[0]];
		c[2]++;
	}
}

void	ft_while(char *str, char *sortie, char *pile, int c[3])
{
	while (str[++c[0]])
		if (str[c[0]] >= '0' && str[c[0]] <= '9')
			sortie[c[1]++] = str[c[0]];
		else if (str[c[0]] == '(')
			pile[c[2]++] = '(';
		else if (ft_if_ope(str[c[0]], str[c[0] - 1], str[c[0] + 1]))
			ft_if(str, sortie, pile, c);
		else if (str[c[0]] == ')')
		{
			while (pile[c[2] - 1] != '(')
			{
				print_space(sortie, &c[1]);
				sortie[c[1]++] = pile[--c[2]];
			}
			c[2]--;
		}
		else if (str[c[0]] == ' ')
			print_space(sortie, &c[1]);
}

void	ft_convert_spaces(char *str2, int c[3], char *str, int *negative)
{
	if (str2[c[0]] == '-')
	{
		while (str2[c[0] - c[2]] == ' ')
			c[2]++;
		if (c[0] == '-')
			*negative = 1;
		else if (ft_if_ope(str2[c[0] - c[2]], ' ', ' '))
			*negative = 1;
		else
			*negative = 0;
		if (*negative)
		{
			str[c[1]++] = ' ';
			str[c[1]++] = '(';
			str[c[1]++] = ' ';
			str[c[1]++] = '0';
			str[c[1]++] = ' ';
		}
	}
	str[c[1]++] = ' ';
	str[c[1]++] = str2[c[0]];
	str[c[1]++] = ' ';
}

char	*ft_convert_spaces2(char *str2, int c[3])
{
	int		negative;
	char	*str;

	negative = 0;
	c[0] = 0;
	while (str2[c[0]])
		c[0]++;
	str = malloc(c[0] * 3 * sizeof(char));
	c[0] = -1;
	c[1] = 0;
	c[2] = 1;
	while (str2[++c[0]])
	{
		if (ft_if_ope(str2[c[0]], ' ', ' '))
			ft_convert_spaces(str2, c, str, &negative);
		else if (str2[c[0]] != ' ')
		{
			str[c[1]++] = str2[c[0]];
			if ((negative && str2[c[0] + 1] <= '0' && str2[c[0] + 1] >= '9')
					|| (negative && str2[c[0] + 1] == '\0'))
				str[c[1]++] = ')';
		}
	}
	str[c[1]] = '\0';
	return (str);
}

int		eval_expr(char *str2)
{
	int		c[3];
	char	*sortie;
	char	*pile;
	char	*str;

	str = ft_convert_spaces2(str2, c);
	c[0] = 0;
	while (str[c[0]])
		c[0]++;
	sortie = malloc((c[0] + 2) * sizeof(char));
	pile = malloc(c[0] * sizeof(char));
	c[0] = -1;
	c[1] = 1;
	c[2] = 0;
	ft_while(str, sortie, pile, c);
	while (c[2] > 0)
	{
		print_space(sortie, &c[1]);
		if (pile[c[2] - 1] != '(')
			sortie[c[1]++] = pile[c[2]-- - 1];
	}
	sortie[c[1]] = ' ';
	sortie[c[1] + 1] = '\0';
	ft_free(pile, str);
	return (ft_progress(sortie));
}
