/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 14:00:41 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/22 09:56:44 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char const *s, char c)
{
	int		i;
	size_t	l;

	i = -1;
	l = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			while (s[++i] && s[i] != c)
				l++;
		}
	}
	return (l);
}

static size_t	w_l(const char *s, char c)
{
	int j;

	j = 0;
	while (*s++ && *s != c)
		j++;
	return ((size_t)j);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		k;
	int		r;

	r = -1;
	if (!s || !(arr = (char**)malloc(sizeof(*arr) * (str_len(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			k = -1;
			if (!(arr[++r] = (char*)malloc(sizeof(char) * w_l(s, c))))
				return (NULL);
			while (*s && *s != c)
				arr[r][++k] = *s++;
			arr[r][++k] = '\0';
		}
		else
			s++;
	}
	arr[++r] = NULL;
	return (arr);
}
