/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:03:48 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:03:50 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	u;
	int v;
	int len;

	u = 0;
	v = 0;
	len = 0;
	while (s2[len])
		len++;
	if (len == 0)
		return ((char*)s1);
	while (s1[u])
	{
		while (s2[v] && s2[v] == s1[u + v])
			v++;
		if (s2[v] == '\0')
			return ((char *)(s1 + u));
		v = 0;
		u++;
	}
	return (NULL);
}
