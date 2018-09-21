/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:24:50 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/12 07:12:56 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[z] != '\0')
	{
		s1[i + z] = s2[z];
		z++;
	}
	s1[i + z] = '\0';
	return (s1);
}