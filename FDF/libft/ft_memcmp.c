/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:22:27 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:22:30 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char*)(s1 + a) != *(unsigned char*)(s2 + a))
			return (*(unsigned char*)(s1 + a) - *(unsigned char*)(s2 + a));
		a++;
	}
	return (0);
}
