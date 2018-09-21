/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:11:20 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 22:09:28 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_asign_strctmlx(t_mlx *to)
{
	to->movex = 550;
	to->movey = 100;
	to->zoom = 20;
	to->alti = -10;
	to->xwin = 1920;
	to->ywin = 1080;
}

int				main(int argc, char **argv)
{
	t_mlx	to;

	if (argc == 2)
	{
		to.map = map(argv, &to);
		ft_asign_strctmlx(&to);
		xymap(&to, 0, 0, 0);
		to.mlx = mlx_init();
		to.win = mlx_new_window(to.mlx, to.xwin, to.ywin, "Zolile's Work");
		pixel(&to);
		mlx_hook(to.win, 2, 0, keys, &to);
		mlx_loop(to.mlx);
	}
	return (0);
}
