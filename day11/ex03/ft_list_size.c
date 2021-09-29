/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 19:31:42 by egiles            #+#    #+#             */
/*   Updated: 2019/08/14 21:12:11 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		size;

	size = 0;
	elem = begin_list;
	while (elem)
	{
		elem = elem->next;
		size++;
	}
	return (size);
}
