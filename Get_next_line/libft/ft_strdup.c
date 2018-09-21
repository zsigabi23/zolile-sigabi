/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:55:05 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:55:07 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*destination;

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	a++;
	destination = (char *)malloc(sizeof(char) * a);
	if (destination == NULL)
		return (NULL);
	a = 0;
	while (s1[a] != '\0')
	{
		destination[a] = s1[a];
		a++;
	}
	destination[a] = '\0';
	return (destination);
}
