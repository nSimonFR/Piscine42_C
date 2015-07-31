/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:30:58 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/13 22:42:03 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_find_next_prime(int nb);

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

int main(int ac, char **argv)
{
    int nb;

    if (ac > 1)
    {
        nb = ft_find_next_prime(atoi(argv[1]));
        printf("%d", nb);
    }
    return(0);
}
