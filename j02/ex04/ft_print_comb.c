/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 10:28:25 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/10 15:06:52 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putch(int ch1, int ch2, int ch3)
{
	ft_putchar (ch1);
	ft_putchar (ch2);
	ft_putchar (ch3);
}

void	ft_putcomma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char ch1;
	char ch2;
	char ch3;

	ch1 = '0';
	ch2 = '1';
	ch3 = '3';
	while (ch1 < '9')
	{
		while (ch2 <= '9')
		{
			while (ch3 <= '9')
			{
				ft_putch(ch1, ch2, ch3);
				if (ch1 != '7' | ch2 != '8' | ch3 != '9')
					ft_putcomma();
				ch3 = ch3 + 1;
			}
			ch2 = ch2 + 1;
			ch3 = ch3 + 1;
		}
		ch1 = ch1 + 1;
		ch2 = ch1 + 1;
		ch3 = ch2 + 1;
	}
}
