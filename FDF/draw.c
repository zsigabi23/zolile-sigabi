/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:12:09 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 21:52:01 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_draw_dx(int absx, int absy, t_mlx *to, t_draw *d)
{
	int		cumul;
	int		i;
	int		x;
	int		y;

	x = d->firstpx;
	y = d->firstpy;
	cumul = absx / 2;
	i = 1;
	while (i <= absx)
	{
		x = x + to->varx;
		cumul = cumul + absy;
		if (cumul >= absx)
		{
			cumul = cumul - absx;
			y = y + to->vary;
		}
		mlx_pixel_put(to->mlx, to->win, 400 + x, 200 + y, to->color);
		i++;
	}
}

static void		ft_draw_dy(int absx, int absy, t_mlx *to, t_draw *d)
{
	int		cumul;
	int		i;
	int		x;
	int		y;

	x = d->firstpx;
	y = d->firstpy;
	cumul = absy / 2;
	i = 1;
	while (i <= absy)
	{
		y = y + to->vary;
		cumul = cumul + absx;
		if (cumul >= absy)
		{
			cumul = cumul - absy;
			x = x + to->varx;
		}
		mlx_pixel_put(to->mlx, to->win, 400 + x, 200 + y, to->color);
		i++;
	}
}

void			draw(int endx, int endy, t_mlx *to, t_draw *d)
{
	int		absx;
	int		absy;

	absx = (endx - d->firstpx < 0) ? -(endx - d->firstpx) : endx - d->firstpx;
	absy = (endy - d->firstpy < 0) ? -(endy - d->firstpy) : endy - d->firstpy;
	to->varx = ((endx - d->firstpx) > 0) ? 1 : -1;
	to->vary = ((endy - d->firstpy) > 0) ? 1 : -1;
	d->firstpx = d->firstpx + to->movex;
	d->firstpy = d->firstpy + to->movey;
	mlx_pixel_put(to->mlx, to->win, 400 + d->firstpx, 200 + d->firstpy,
			to->color);
	if (absx > absy)
		ft_draw_dx(absx, absy, to, d);
	else
		ft_draw_dy(absx, absy, to, d);
	d->firstpx = d->firstpx - to->movex;
	d->firstpy = d->firstpy - to->movey;
}
