/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:51:07 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/14 07:15:47 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		s;

	n = 0;
	s = 1;
	if (*str == '\0')
		return (0);
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	i = 0;
	while (*str && ft_isdigit(*str))
	{
		n = (n * 10) + (*str++ - '0');
		if (i > 18)
			return (s == -1 ? 0 : -1);
		i++;
	}
	return (n * s);
}
