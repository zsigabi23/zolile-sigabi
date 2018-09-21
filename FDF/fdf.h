/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:11:49 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 21:49:42 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include <mlx.h>
# include <fcntl.h>

typedef	struct	s_draw
{
	int		firstpx;
	int		firstpy;
	int		endpxx;
	int		endpxy;
	int		endpyx;
	int		endpyy;
}				t_draw;

typedef	struct	s_mlx
{
	void	*mlx;
	void	*win;
	int		xwin;
	int		ywin;
	int		nuline;
	int		zoom;
	int		movex;
	int		movey;
	int		color;
	int		varx;
	int		vary;
	int		alti;
	int		**mapxyz;
	char	**map;
}				t_mlx;

char			**map(char	**argv, t_mlx *to);
int				get_next_line(int const fd, char **line);
void			xymap(t_mlx *to, int y, int x, int i);
void			pixel(t_mlx *to);
int				width(char **map, int i);
int				keys(int keycode, t_mlx *to);
void			draw(int endx, int endy, t_mlx *to, t_draw *d);

#endif
