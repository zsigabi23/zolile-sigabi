/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:23:36 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:23:39 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t s;

	s = 0;
	while (s < len)
	{
		*(unsigned char*)(b + s) = (unsigned char)c;
		s++;
	}
	return (b);
}
