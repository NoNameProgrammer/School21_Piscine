/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_oper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:52:27 by egiles            #+#    #+#             */
/*   Updated: 2019/08/18 21:48:02 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdlib.h>

extern struct s_oper *oper_top;

s_oper	*ft_create_oper_top(void)
{
	t_oper *elem;

	elem = malloc(sizeof(t_oper));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void ft_push_oper(char c)
{
	t_numb *elem;

	elem = malloc(sizeof(t_oper));
	if (elem)
	{
		elem->data = oper;
		elem->next = numb_oper;
	}
	numb_oper = elem;
}

void	ft_pop_oper(void)
{
	t_oper *elem;

	elem = (oper_top);
	(oper_top) = (oper_top)->next;
	free(elem);
}

char	ft_get_top_oper(void)
{
	int numb;

	numb = numb_oper->data;
	return (oper);
}
