/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:35:49 by egiles            #+#    #+#             */
/*   Updated: 2019/08/07 16:02:15 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	first_ind(char *s)
{
	int i;

	i = 0;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '-' && s[i] != '+'))
	{
		if ((s[i] >= 33 && s[i] < 48) || (s[i] > 57 && s[i] < 127))
			return (-1);
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = first_ind(str);
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
