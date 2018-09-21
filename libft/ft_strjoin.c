/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:39:13 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/06 12:12:42 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ts;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	ts = (char*)malloc(sizeof(*ts) * (i + 1));
	if (ts == NULL)
		return (NULL);
	ft_strcpy(ts, s1);
	ft_strcat(ts, s2);
	return (ts);
}
