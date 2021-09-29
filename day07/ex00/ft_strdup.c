/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:49:16 by egiles            #+#    #+#             */
/*   Updated: 2019/08/08 22:43:55 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copystr;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	copystr = (char*)malloc(sizeof(*copystr) * (len + 1));
	if (copystr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copystr[i] = src[i];
		i++;
	}
	copystr[i] = '\0';
	return (copystr);
}
