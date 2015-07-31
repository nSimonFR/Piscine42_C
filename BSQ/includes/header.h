/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 12:44:07 by bhamon            #+#    #+#             */
/*   Updated: 2015/07/30 20:22:44 by bhamon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUFFER 1024

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "struct.h"

void		ft_init_c(char *file, t_map *dim);
void		ft_init_w_c(char *file, t_map *dim);
void		ft_init_l(char *file, t_map *dim);

int			ft_atoi(char *str);
int			ft_cut(char *str);
int			ft_strlen(char *str);

void		ft_print(char *file, t_square max, t_map dim);

void		ft_error(char *str);
char		*ft_safe_malloc(int lenght);
int			*ft_safe_malloc_int(int lenght);
int			ft_safe_open(char *str, int right);
void		ft_safe_close(int fd);

int			*ft_globale();

t_square	ft_count(char *file, t_map dim);

#endif
