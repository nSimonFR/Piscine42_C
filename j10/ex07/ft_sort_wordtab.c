/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 22:04:32 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/22 23:13:09 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_str(char *s1, char	*s2)
{
	int i;
	int	ok;
	int j;

	ok = 0;
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && ok == 0)
	{
		if (s2[i] < s1[i])
			ok = 2;
		if (s2[i] > s1[i])
			ok = 1;
		i++;
	}
	if (ok == 0)
	{
		i = 0;
		j = 0;
		while (s1[j] != '\0')
			j++;
		while (s2[i] != '\0')
			i++;
		if (i > j)
			ok = 1;
	}
	return (ok);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	while (tab[i] != '\0')
	{
		j = 0;
		if (ft_sort_str(tab[i], tab[i - 1]) == 1)
		{
			temp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = temp;
			i = 1;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	int i = 0;
	ft_sort_wordtab(av + 1);
	while(++i < ac)
		printf("%s", av[i]);
}
