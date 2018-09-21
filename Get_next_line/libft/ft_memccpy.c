/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:21:58 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:22:01 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t m;

	m = 0;
	while (m < n)
	{
		*(unsigned char*)(dst + m) = *(unsigned char*)(src + m);
		if (*(unsigned char*)(src + m) == (unsigned char)c)
			return (dst + m + 1);
		m++;
	}
	return (NULL);
}
