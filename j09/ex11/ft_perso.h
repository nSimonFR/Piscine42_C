/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 08:35:09 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 09:03:09 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "Staff";

typedef struct s_perso	t_perso;
struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
};
#endif
