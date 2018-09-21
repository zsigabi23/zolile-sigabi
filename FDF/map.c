/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 17:12:26 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/17 21:52:40 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_line_read(char *line)
{
	int		i;

	i = 0;
	if (ft_strlen(line) <= 0)
		exit(EXIT_FAILURE);
	while (line[i] != '\0')
	{
		if (ft_isdigit(line[i]))
			while (line[i] != ' ' && line[i] != '\0')
				i++;
		if (line[i] == '\0')
			return ;
		if (!(ft_isdigit(line[i]) || (line[i] == '-' && ft_isdigit(line[i + 1]))
					|| line[i] == ' '))
			exit(EXIT_FAILURE);
		i++;
	}
}

char			*the_while(int fd, char *mapjoin, t_mlx *to)
{
	char *ptr;
	char *line;

	while (get_next_line(fd, &line) > 0)
	{
		ft_line_read(line);
		ptr = mapjoin;
		mapjoin = ft_strjoin(mapjoin, line);
		free(ptr);
		ptr = mapjoin;
		mapjoin = ft_strjoin(mapjoin, "\n");
		to->nuline++;
		free(line);
		free(ptr);
	}
	free(line);
	return (mapjoin);
}

char			**map(char **argv, t_mlx *to)
{
	char	*line;
	int		fd;
	char	**map;
	char	*mapjoin;

	mapjoin = (char*)malloc(1);
	fd = open(argv[1], O_RDONLY);
	to->nuline = 0;
	mapjoin = the_while(fd, mapjoin, to);
	if (to->nuline == 0)
		exit(EXIT_FAILURE);
	if (get_next_line(fd, &line) == -1)
		exit(EXIT_FAILURE);
	map = ft_strsplit(mapjoin, '\n');
	free(line);
	free(mapjoin);
	return (map);
}
