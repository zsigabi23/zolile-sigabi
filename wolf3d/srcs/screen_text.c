/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:32:46 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/28 13:32:47 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	help_text(t_wolf3d *t)
{
	mlx_string_put(t->mlx, t->win, 10, 10,
			0xEEEEEE, "Press W A S D or the arrow keys to move.");
	mlx_string_put(t->mlx, t->win, 10, 30, 0xEEEEEE, "Press SHIFT to sprint.");
	mlx_string_put(t->mlx, t->win, 10, 50,
			0xEEEEEE, "Press DEL to reset the level.");
	mlx_string_put(t->mlx, t->win, 10, 90,
			0xEEEEEE, "Press H to show or hide this help.");
	mlx_string_put(t->mlx, t->win, 10, 110,
			0xEEEEEE, "Press ESC to quit.");
}
