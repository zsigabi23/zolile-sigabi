/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:03:07 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:03:09 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*r;

	x = 0;
	r = NULL;
	while (s[x])
	{
		if (s[x] == c)
			r = s + x;
		x++;
	}
	if (s[x] == c)
		return ((char*)(s + x));
	return ((char*)r);
}
