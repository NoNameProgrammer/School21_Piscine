/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:13:14 by egiles            #+#    #+#             */
/*   Updated: 2019/08/18 23:11:34 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_input(char **str)
{
	int i;

	i = 0;
//	while (str[i] && str[i] != '+' && str[i] != "("
//		   	&& (str[i] < '0' || str[i] > '9'))
	while (*str[i])
		while (*str[i] == ' ')
			i++;
			if (*str[i] == '-')
				ft_translate(i, str);
			//push to stack1 ascii (-1) * ft_translate(i, *str)
		while (*str[i] == '(')
			ft_push_oper_top('(');
			//push to stack1 ascii ft_translate(i, *str)
		if (*str[i] >= '0' || *str[i] <= '9')
			i = ft_translate(i, str);
		if (*str[i] == '/')
			ft_push_oper_top('/');
		if (*str[i] == '%')
			ft_push_oper_top('%');
		while (*str[i] == ')')
			ft_push_oper_top(')');
			//push to stack1
	return (0);
}

int	ft_translate(int i, char **str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if (*str[i] == '-' && ft_check_operand(i, str))
		return (++i);
	else
		i++;
		sign *= -1;
	while (*str[i] >= '0' && *str[i] <= '9')
	{
		result = (result * 10) + (*str[i] - '0');
		i++;
	}
	//push to stack0 sign * result
	ft_push_numb_top(-1 * ft_translate(i, str));
	return (i);
}

int ft_check_operand(int i, char **str)
{
	int j;

	j = i;
	while (*str[j] != *str[0] && *str[j] != '(')
	{
		if ((*str[j] >= '0' || *str[j] <= '9') || *str[j] == ')')
		{
			//push to stack0 '-'
			ft_push_oper_top('-');
			return (1);
		}
			else
				j++;
	}
	return (0);
}

int ft_calculate(int a, int b, char oper)
{
	if (oper == '+')
		return (a + b);
	if (oper == '-')
		return (a - b);
	if (oper == '/')
		return (a / b);
	if (oper == '%')
		return (a % b);
	return (0);
}

int ft_precedence(char oper)
{
	if (oper == '+' || oper == '-')
		return (1);
	if (oper == '/' || oper == '%')
		return (2);
	return (0);
}
