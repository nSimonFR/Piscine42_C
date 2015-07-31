/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 11:37:24 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/12 16:46:55 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int printf(const char* format, ...);

void ft_line(int *l, int *size, int *etoile)
{
	int c;
	int esp;

	esp = *etoile;
	esp = 0;
	c = 0;
	printf("size: %d", *size);
	while(size > 0)
	{
		esp = esp + *size;
		size = size + 1;
	}
	esp = esp - *l;
	printf("esp: %d", esp);
/*  while(c < esp)
	{
		ft_putchar(32);
		c = c + 1;
	}
	ft_putchar('/');
	c = 0;
	while(c < *h)
	{
		ft_putchar('*');
		c = c + 1;
	}
	ft_putchar('\\');
	ft_putchar('\n');*/
}


void ft_floor(int *h, int *size, int *etoile)
{
	int l;

	l = 1;
	while(l < *h + 4)
	{
		printf("l");
		ft_line(&l,&*size,&*etoile);
		l = l + 1;
		*etoile = *etoile + 2;
	}
}

void sastantua(int size)
{
	int h;
	int etoile;

	etoile = 1;
	h = 0;
	if (size > 0)
	{
		while(h < size - 1)
		{
			printf("f");
			ft_floor(&h,&size,&etoile);
			h = h + 1;
		}
/*		ft_last_floor(size);*/
	}
}
