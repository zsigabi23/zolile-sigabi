/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:06:03 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:06:05 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	terminate;
	size_t	len;

	begin = 0;
	len = 0;
	if (s != NULL)
	{
		while (begin < ft_strlen(s) && ft_isspace(s[begin]))
			begin++;
		terminate = ft_strlen(s) - 1;
		while (terminate > begin && ft_isspace(s[terminate]))
			terminate--;
		len = terminate - begin + 1;
	}
	return (ft_strsub(s, begin, len));
}
