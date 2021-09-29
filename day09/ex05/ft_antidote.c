/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:52:29 by egiles            #+#    #+#             */
/*   Updated: 2019/08/08 21:59:02 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	int arr[3];
	int count;
	int buff;

	count = 0;
	arr[0] = i;
	arr[1] = j;
	arr[2] = k;
	while (count < 2)
	{
		if (arr[count] > arr[count + 1])
		{
			buff = arr[count];
			arr[count] = arr[count + 1];
			arr[count + 1] = buff;
		}
		count++;
	}
	return (arr[1]);
}
