/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 11:49:49 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/15 19:11:59 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **argv)
{
	int i;

	i = 1;
	if (ac > 0)
	{
		while (argv[i] != '\0')
		{
			i++;
		}
		while (i > 1)
		{
			i--;
			ft_print_program_name(argv[i]);
		}
		return (0);
	}
}
