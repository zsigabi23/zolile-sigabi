/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:24:06 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:24:08 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	int uni[2];

	ft_memcpy(uni, "\u00F8", 2);
	if (ft_isascii(c))
		write(1, &c, 1);
	else
	{
		uni[1] = c;
		write(1, &uni, 2);
	}
}