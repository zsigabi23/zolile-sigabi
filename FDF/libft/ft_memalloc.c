/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 13:21:42 by zsigabi           #+#    #+#             */
/*   Updated: 2018/06/29 13:21:44 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	if (!(memory = (void*)malloc(sizeof(*memory) * (size))) || !size)
		return (NULL);
	memory = ft_memset(memory, 0, size);
	return (memory);
}
