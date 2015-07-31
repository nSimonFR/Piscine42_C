/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 22:39:23 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/16 22:56:52 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_maj(char a)
{
	a = a - 65;
	a = ((a + 42) % 26);
	a = a + 65;
	return (a);
}

char	ft_min(char a)
{
	a = a - 97;
	a = ((a + 42) % 26);
	a = a + 97;
	return (a);
}

char	ft_rot(char a)
{
	if (a >= 65 && a <= 90)
	{
		return (ft_maj(a));
	}
	else if (a >= 97 && a <= 122)
	{
		return (ft_min(a));
	}
	else
	{
		return (a);
	}
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_rot(str[i]);
		i++;
	}
	return (str);
}
