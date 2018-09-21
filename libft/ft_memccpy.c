/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:10:23 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/06 14:06:22 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(char *dst, const char *src, int c, size_t n)
{
	int				i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (i < (int)n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			dst1[i] = src1[i];
			i++;
			return ((void *)dst1 + i);
		}
		i++;
	}
	return (NULL);
}
