/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:01:03 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 14:01:05 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*temp;

	if (!(temp = (char*)malloc(sizeof(*temp) * (size + 1))))
		return (NULL);
	temp = (char*)ft_memset(temp, 0, size + 1);
	return (temp);
}
