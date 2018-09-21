/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:24:59 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:25:00 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	v[10];
	long	nb;
	int		x;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	x = 0;
	while (nb > 0)
	{
		v[x] = nb % 10 + '0';
		nb = nb / 10;
		x++;
	}
	x--;
	while (x >= 0)
	{
		ft_putchar_fd(v[x], fd);
		x--;
	}
}
