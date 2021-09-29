/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:39:52 by egiles            #+#    #+#             */
/*   Updated: 2019/08/04 19:52:16 by egiles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	fun_x(int x, char c, char d)
{
	int a;

	a = 1;
	ft_putchar(c);
	while (a < x - 1)
	{
		ft_putchar('B');
		a++;
	}
	if (a == x - 1)
	{
		ft_putchar(d);
	}
}

void	ft_str(int x)
{
	int b;

	b = 1;
	ft_putchar('B');
	while (b < x - 1)
	{
		ft_putchar(' ');
		b++;
	}
	if (b < x)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	fun_y(int y, int x)
{
	int a;

	a = 1;
	while (a < y - 1)
	{
		ft_str(x);
		a++;
	}
	fun_x(x, 'C', 'A');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	if (x == 1)
	{
		ft_putchar('A');
	}
	if (x > 1)
	{
		fun_x(x, 'A', 'C');
	}
	if (y > 1)
	{
		ft_putchar('\n');
		fun_y(y, x);
	}
	ft_putchar('\n');
}
