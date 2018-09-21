/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:03:31 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:03:33 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

static char		*get_next_word(const char *s, char c)
{
	size_t	dimention;
	char	*word;
	int		a;

	a = 0;
	dimention = ft_strlen(s);
	if (!(word = (char*)malloc(dimention + 1)))
		return (NULL);
	while (*s && *s != c)
		word[a++] = *s++;
	word[a] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		number_of_words;
	int		a;

	if (!s)
		return (NULL);
	number_of_words = count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(*tab) * (number_of_words + 1))))
		return (NULL);
	a = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			tab[a] = get_next_word(s, c);
			a++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[a] = NULL;
	return (tab);
}
