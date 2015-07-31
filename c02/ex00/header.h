/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 13:14:35 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/26 21:32:08 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_copy
{
	int		x;
	int		y;
	int		l;
	int		c;
	char	**tab;
}				t_copy;

char			**ft_read_file(void);
t_copy			ft_count(char **tab);
int				ft_tabcmp(char **tab, char **tab2);
void			ft_put_colle(int i, t_copy *tab2);
void			ft_result(int i, int x, int y, int ok);
void			ft_colle00(t_copy *tab2);
void			ft_colle01(t_copy *tab2);
void			ft_colle02(t_copy *tab2);
void			ft_colle03(t_copy *tab2);
void			ft_colle04(t_copy *tab2);
void			ft_printl(t_copy *tab2, char a, char b, char c);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_error(char *str);
void			ft_putnbr_rec(int nb);

#endif
