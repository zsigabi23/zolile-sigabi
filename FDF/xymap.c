/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xymap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:13:37 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 21:54:20 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_xymap_struct(t_mlx *to)
{
	int		y;

	y = 0;
	if (!(to->mapxyz = (int **)malloc((to->nuline + 1) * sizeof(int *))))
		exit(EXIT_FAILURE);
	while (y < to->nuline)
	{
		to->mapxyz[y] = (int *)malloc(width(to->map, y) * sizeof(int));
		if (!(to->mapxyz[y]))
			exit(EXIT_FAILURE);
		y++;
	}
}

void			xymap(t_mlx *to, int y, int x, int i)
{
	ft_xymap_struct(to);
	while (y < to->nuline)
	{
		i = 0;
		x = 0;
		while (to->map[y][i] != '\0')
		{
			if (ft_isdigit(to->map[y][i]) == 1 || to->map[y][i] == '-')
			{
				to->mapxyz[y][x] = ft_atoi(&to->map[y][i]);
				to->mapxyz[y][x] += (to->mapxyz[y][x] != 0) ? to->alti : 0;
				x++;
				if (to->map[y][i] == '-')
					i++;
				while (ft_isdigit(to->map[y][i]) == 1)
					i++;
				while (to->map[y][i] != ' ' && to->map[y][i] != '\0')
					i++;
			}
			else
				i++;
		}
		y++;
	}
}
