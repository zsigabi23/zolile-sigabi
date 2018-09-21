/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:13:05 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 22:00:59 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_get_color(t_mlx *to, int y, int x)
{
	if (to->mapxyz[y][x] < 0)
		return (0xAA2200);
	else if (to->mapxyz[y][x] > 0)
		return (random());
	else
		return (0xFFFFFF);
}

static void		ft_init_structdraw(t_draw *d, int x, int y, t_mlx *to)
{
	d->firstpx = 1.0 * (x - y) * to->zoom;
	d->firstpy = ((0.4 * (x + y) - 0.40 * to->mapxyz[y][x]) * to->zoom);
	d->endpxx = (1.0 * (x + 1 - y) * to->zoom);
	d->endpxy = (1.0 * (x - (y + 1)) * to->zoom);
	d->endpyx = ((0.4 * (x + 1 + y) - 0.40 * to->mapxyz[y][x + 1]) * to->zoom);
	if (y < to->nuline - 1)
		d->endpyy = ((0.4 * (x + 1 + y) - 0.40 * to->mapxyz[y + 1][x]) *
				to->zoom);
}

static void		ft_check_draw(t_mlx *to, t_draw *d, int y, int x)
{
	int		cx;
	int		cy;

	cx = (x < width(to->map, y) - 1) ? 1 : 0;
	cy = (y < to->nuline - 1 && x < width(to->map, y + 1)) ? 1 : 0;
	if (cx == 1 && to->mapxyz[y][x] < to->mapxyz[y][x + 1])
	{
		to->color = ft_get_color(to, y, x + 1);
		draw(d->endpxx, d->endpyx, to, d);
	}
	if (cx == 1 && to->mapxyz[y][x] >= to->mapxyz[y][x + 1])
	{
		to->color = ft_get_color(to, y, x);
		draw(d->endpxx, d->endpyx, to, d);
	}
	if (cy == 1 && to->mapxyz[y][x] < to->mapxyz[y + 1][x])
	{
		to->color = ft_get_color(to, y + 1, x);
		draw(d->endpxy, d->endpyy, to, d);
	}
	if (cy == 1 && to->mapxyz[y][x] >= to->mapxyz[y + 1][x])
	{
		to->color = ft_get_color(to, y, x);
		draw(d->endpxy, d->endpyy, to, d);
	}
}

void			pixel(t_mlx *to)
{
	int		y;
	int		x;
	t_draw	d;

	y = 0;
	while (y < to->nuline)
	{
		x = 0;
		while (x < width(to->map, y))
		{
			ft_init_structdraw(&d, x, y, to);
			ft_check_draw(to, &d, y, x);
			x++;
		}
		y++;
	}
}
