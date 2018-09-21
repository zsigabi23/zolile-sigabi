/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:05:45 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:05:47 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s)
	{
		i = 0;
		if (!(sub = (char*)malloc(sizeof(*s) * (len + 1))))
			return (NULL);
		while (s[start] && len-- > 0)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	else
		return (NULL);
}
