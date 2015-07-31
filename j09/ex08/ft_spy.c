/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 02:53:00 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 11:55:41 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_lowercase(int argc, char **argv)
{
	int	i;
	int j;

	i = -1;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = argv[i][j] - 'A' + 'a';
	}
}

int		ft_spy(char *argc, char *tab)
{
	int i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = 1;
	while (argc[j] == ' ')
		j++;
	while (argc[j] != '\0' && tab[i] != '\0' && k == 1)
	{
		if (argc[j] != ' ' && tab[i] != '\0')
		{
			if (argc[j++] != tab[i++])
				return (0);
		}
		else
			return (0);
	}
	while (argc[j] == ' ')
		j++;
	if (k == 1 && argc[j] != '\0')
		k = 0;
	return (ok);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	ok = 0;
	ft_lowercase(argc, argv);
	while (++i < argc && ok == 0)
	{
		ok += ft_spy(argv[i], "powers");
		ok += ft_spy(argv[i], "president");
		ok += ft_spy(argv[i], "attacks");
	}
	if (k)
		write(1, "Alert!!!\n", 9);
	return (0);
}
