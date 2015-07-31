/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 09:09:28 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 09:51:43 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define OPEN 1

typedef struct s_door	t_door;
struct	s_door
{
	int state;
};
void	ft_putstr(char *str);
void	close_door(t_door *door);
void	open_door(t_door *door);
int		is_door_open(t_door *door);
int		is_door_close(t_door *door);
#endif
