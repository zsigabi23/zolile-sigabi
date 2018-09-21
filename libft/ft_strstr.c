/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:23:18 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/06 14:16:40 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*hay;

	hay = (char*)haystack;
	if (*needle == '\0')
		return (hay);
	while (*hay != '\0')
	{
		i = 0;
		while (needle[i] == hay[i] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (hay);
		hay++;
	}
	return (NULL);
}
