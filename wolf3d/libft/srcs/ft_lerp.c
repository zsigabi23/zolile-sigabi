/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:22:31 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/16 08:22:33 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_lerp(double first, double second, double p)
{
	if (first == second)
		return (first);
	return (first + (second - first) * p);
}
