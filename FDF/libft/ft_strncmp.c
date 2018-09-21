/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:59:50 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:59:52 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	v;

	v = 0;
	while (v < n && (s1[v] || s2[v]))
	{
		if (*(unsigned char*)(s1 + v) != *(unsigned char*)(s2 + v))
			return (*(unsigned char*)(s1 + v) - *(unsigned char*)(s2 + v));
		v++;
	}
	return (0);
}
