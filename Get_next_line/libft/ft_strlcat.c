/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:56:42 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:56:44 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t o;
	size_t p;
	size_t longeur;

	longeur = ft_strlen(dst);
	o = 0;
	while (dst[o])
		o++;
	p = 0;
	if (size < longeur)
		return (ft_strlen(src) + size);
	if (size == longeur)
		return (longeur + ft_strlen(src));
	else
	{
		while (src[p] && p < size - longeur - 1)
		{
			dst[o] = src[p];
			p++;
			o++;
		}
		dst[o] = '\0';
		return (longeur + ft_strlen(src));
	}
}
