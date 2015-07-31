/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:30:58 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 17:28:49 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_iterative_power(int nb, int power);

int ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main()
{
    int nb;
    int power;

    nb = -3;
    power = 4;
    nb = ft_iterative_power(nb,power);
    printf("%d", nb);
    return(0);
}

