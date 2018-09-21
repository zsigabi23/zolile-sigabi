/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:24:25 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:24:27 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int	uni[2];

	ft_memcpy(uni, "\u00F8", 2);
	if (ft_isascii(c))
		write(fd, &c, 1);
	else
	{
		uni[1] = c;
		write(fd, &uni, 2);
	}
}
