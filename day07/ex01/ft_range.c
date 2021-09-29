/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:48:09 by egiles            #+#    #+#             */
/*   Updated: 2019/08/08 22:56:30 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
