/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:24:33 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/16 08:24:34 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
		if (((unsigned char *)dst)[i - 1] == cc)
			return (&dst[i]);
	}
	return (NULL);
}
