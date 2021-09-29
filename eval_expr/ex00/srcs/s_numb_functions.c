/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_numb_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:52:27 by egiles            #+#    #+#             */
/*   Updated: 2019/08/18 22:12:16 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdlib.h>

extern struct s_numb *numb_top;

s_numb	*ft_create_numb_top(void)
{
	t_numb *elem;

	elem = malloc(sizeof(t_numb));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void ft_push_numb(int i)
{
	t_numb *elem;

	elem = malloc(sizeof(t_numb));
	if (elem)
	{
		elem->data = numb;
		elem->next = numb_top;
	}
	numb_top = elem;
}

int	ft_pop_numb(void)
{
	t_numb *elem;

	elem = numb_top;
	numb_top = numb_top->next;
	free(elem);
}

int	ft_get_top_numb(void)
{
	int numb;

	numb = numb_top->data;
	return (numb);
}
