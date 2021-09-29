/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:23:47 by egiles            #+#    #+#             */
/*   Updated: 2019/08/14 21:05:22 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	t_list	*tmp;
	int		i;

	if (ac == 1)
		return (NULL);
	i = 2;
	elem = ft_create_elem(av[1]);
	while (i < ac)
	{
		tmp = elem;
		elem = ft_create_elem(av[i]);
		elem->next = tmp;
		i++;
	}
	return (elem);
}
