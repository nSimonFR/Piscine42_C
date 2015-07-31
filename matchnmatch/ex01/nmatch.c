/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 20:09:08 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/19 20:17:11 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int nmatch(char *s1, char *s2)
{
	static int i = 0;

	if (*s2)
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (i+1);
	if (*s2 == '*' && *s1)
	{
		if (nmatch(s1, s2 + 1))
			return (i+1);
		else
			return (nmatch(s1 + 1, s2));
	}
	if (*s2 == '\0' && *s1 == '\0')
		return (i+1);
	if (*s1 == *s2)
		return(nmatch(s1 + 1, s2 + 1));
	else
		return (i);
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d", nmatch(av[1], av[2]));
	}
}
