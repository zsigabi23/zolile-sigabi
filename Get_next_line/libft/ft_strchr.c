/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:53:14 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:53:16 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int l;

	l = 0;
	while (s[l])
	{
		if (s[l] == (char)c)
			return ((char*)(s + l));
		l++;
	}
	if (s[l] == (char)c)
		return ((char*)(s + l));
	return (NULL);
}
