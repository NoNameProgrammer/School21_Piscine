/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 20:46:34 by egiles            #+#    #+#             */
/*   Updated: 2019/08/18 23:25:49 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

extern struct s_oper *oper_top;
extern struct s_numb *numb_top;

int	ft_check_stack_oper(void)
{
	t_oper *elem;

	elem = oper_top;
	if (elem->data == 0)
		return (1);
	return (0);
}

void	ft_stack_calculate(void)
{
	int		numb1;
	int		numb2;
	char	oper;

	numb2 = ft_get_top_numb();
	ft_pop_top_numb();
	numb1 = ft_get_top_numb();
	ft_pop_top_numb();
	oper = ft_get_top_oper();
	ft_pop_top_oper();
	ft_add_numb(calculate(numb1, numb2, oper));
}

int	eval_expr(char *str)
{
	numb_top = ft_create_numb_top();
	oper_top = ft_create_oper_top();
	ft_input(**str);
	while (ft_check_stack_oper() != 1)
		ft_stack_calculate();
	return (ft_get_top_numb());
}
