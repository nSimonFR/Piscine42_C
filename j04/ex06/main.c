/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:30:58 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 23:10:10 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_is_prime(int nb);

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

    nb = 1;
    nb = ft_is_prime(nb);
    printf("%d", nb);
    return(0);
}
