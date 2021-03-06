/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 17:44:50 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/14 20:25:37 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned n)
{
	int unsigned i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	return (s1[i] - s2[i]);
}
