/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 15:51:03 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/22 19:51:00 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_atoi(char *a)
{
	int i;
	int in;
	int j;
	int ok;

	i = 0;
	j = 1;
	in = 0;
	ok = 0;
	while (a[i] == ' ')
		i++;
	if (a[i] == '-')
		ok = 1;
	i = 0;
	while (a[i] >= '0' && a[i] <= '9')
	{
		in *= 10;
		in = in + (a[i] - '0');
		i++;
	}
	if (ok)
		in = -1 * in;
	return (in);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb < 0)
		nb = -1 * nb;
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		ft_putchar(nb + '0');
	}
}

int		ft_solve(char *a, char *b, char *c, int (*f[5])(int, int))
{
	if (b[0] == '+')
		return (f[0](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '-')
		return (f[1](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '*')
		return (f[2](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '/')
		return (f[3](ft_atoi(a), ft_atoi(c)));
	else if (b[0] == '%')
		return (f[4](ft_atoi(a), ft_atoi(c)));
	else
		return (0);
}

int		main(int ac, char **av)
{
	int (*tab[5])(int, int);

	tab[0] = ft_add;
	tab[1] = ft_sub;
	tab[2] = ft_mult;
	tab[3] = ft_div;
	tab[4] = ft_mod;
	if (ac == 4)
	{
		if (av[2][0] == '/' && av[3][0] == '0')
			write(1, "Stop : division by zero", 23);
		else if (av[2][0] == '%' && av[3][0] == '0')
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_solve(av[1], av[2], av[3], tab));
		write(1, "\n", 1);
	}
	return (0);
}
