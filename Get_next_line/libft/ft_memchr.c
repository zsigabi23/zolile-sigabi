/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:32:58 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/12 09:21:27 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	z;

	i = 0;
	ptr = (unsigned char*)s;
	z = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == z)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
