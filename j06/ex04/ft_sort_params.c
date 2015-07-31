/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 11:49:49 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/16 19:36:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_2(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

void	ft_print_sort_params(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr_2(argv[i]);
		ft_putchar('\n');
	}
}

int		ft_sort_str(char *s1, char *s2)
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

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	while (++i < argc)
	{
		j = 0;
		if (ft_sort_str(argv[i], argv[i - 1]) == 1)
		{
			temp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = temp;
			i = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_sort_params(argc, argv);
	return (0);
}
