/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:36:30 by egiles            #+#    #+#             */
/*   Updated: 2019/08/03 23:06:37 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int tmp;

	if (power < 0 || (power == 0 && nb == 0))
		return (0);
	if (power == 0)
		return (1);
	tmp = nb;
	while (power > 1)
	{
		tmp = tmp * nb;
		power--;
	}
	return (tmp);
}
