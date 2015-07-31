/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:30:58 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/15 17:54:17 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

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

int main(/*int ac, char **argv*/)
{
    char a[100] = "abcdefghijklmnoupq";
    char b[100] = "01234";
    char c[100] = "01234";
    char d[100] = "abcdefghijklmnopq";

//    if (ac > 2)
//    {
        strncpy(d, c, 3);
        ft_strncpy(a, b, 3);
        printf("%s;%s", d, a);
//    }
    return(0);
}
