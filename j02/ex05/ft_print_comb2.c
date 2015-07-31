/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 15:12:18 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/10 23:41:29 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	set0(char *nb11, char *nb12, char *nb21, char *nb22)
{
	*nb11 = '0';
	*nb12 = '0';
	*nb21 = '0';
	*nb22 = '0';
}

void	set02(char *nb12, char *nb21, char *nb22)
{
	*nb12 = '0';
	*nb21 = '0';
	*nb22 = '0';
}

void	putch(char *nb11, char *nb12, char *nb21, char *nb22)
{
	if (*nb11 != '9' | *nb12 != '0' | *nb21 != '9' | *nb22 != '9')
	{
		ft_putchar(*nb11);
		ft_putchar(*nb12);
		ft_putchar(' ');
		ft_putchar(*nb21);
		ft_putchar(*nb22);
	}
}

void	boucle(char *nb11, char *nb12, char *nb21, char *nb22)
{
	while (*nb21 <= '9')
	{
		while (*nb22 <= '9')
		{
			if (*nb11 < *nb21 || (*nb12 == *nb21 && *nb12 < *nb22))
			{
				putch(nb11, nb12, nb21, nb22);
				if (*nb12 != '9' | *nb12 != '0' | *nb21 != '9' | *nb22 != '9'
					|| (*nb22 != '9' && *nb22 != '8'))
				{
					ft_putchar(' ');
					ft_putchar(',');
				}
			}
			*nb22 = *nb22 + 1;
		}
		*nb21 = *nb21 + 1;
		*nb22 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	nb11;
	char	nb12;
	char	nb21;
	char	nb22;

	set0 (&nb11, &nb12, &nb21, &nb22);
	while (nb11 <= '9')
	{
		while (nb12 <= '9')
		{
			boucle(&nb11, &nb12, &nb21, &nb22);
			nb12++;
			nb21 = '0';
			nb22 = '0';
		}
		nb11++;
		set02(&nb12, &nb21, &nb22);
	}
}
