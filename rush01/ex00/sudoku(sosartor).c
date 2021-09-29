/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosartor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 09:08:11 by sosartor          #+#    #+#             */
/*   Updated: 2019/08/10 15:40:34 by sosartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 9
#define N_S 3
#define TRUE 1
#define FALSE 0
#include <unistd.h>
#include <stdio.h>

typedef int t_bool;

void	print_sudoku(int sudoku[N][N])
{
	int i;
	int j;
	char c;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			c = sudoku[i][j] + '0';
			write(1, &c, 1);
			//printf("%d", sudoku[i][j]);
			j++;
			if (j < N)
				write(1, " ", 1);
				//printf(" ");
		}
		write(1, "\n", 1);
		//printf("\n");
		i++;
	}
}

t_bool	check_input(int argc, char **argv)
{
	int i;
	int n;
	int no_err;

	no_err = TRUE;
	if (argc <= N)
		no_err = FALSE;
	else
	{
		n = 1;
		while (n < N + 1)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				if (i > N)
					no_err = FALSE;
				else if ((argv[n][i] < '1' || argv[n][i] > '9')
						&& argv[n][i] != '.')
					no_err = FALSE;
				i++;
			}
				if (i < N)
				no_err = FALSE;
			n++;
		}
	}
	return (no_err);
}

t_bool	find_empty(int sudoku[N][N], int *row, int *col)
{
	while (*row < N)
	{
	//	printf("%d %d\n", *row, *col);
		while (*col < N)
		{
//			printf("%d ", sudoku[*row][*col]);
			if (sudoku[*row][*col] == 0)
				return TRUE;
			*col = *col + 1;
		}
		*col = 0;
		*row = *row + 1;
	}
	return FALSE;
}

t_bool	check_h(int sudoku[N][N], int row, int col, int num)
{
	int i;

	i = col - 1;
	while (i >= 0)
	{
		if (sudoku[row][i] == num)
			return FALSE;
		i--;
	}
	i = col + 1;
	while (i < N)
	{
		if (sudoku[row][i] == num)
			return FALSE;
		i++;
	}
	return TRUE;
}

t_bool	check_v(int sudoku[N][N], int row,int col, int num)
{
	int i;

	i = row - 1;
	while (i >= 0)
	{
		if (sudoku[i][col] == num)
			return FALSE;
		i--;
	}
	i = row + 1;
	while (i < N)
	{
		if (sudoku[i][col] == num)
			return FALSE;
		i++;
	}
	return TRUE;
}

t_bool	check_area(int sudoku[N][N], int row, int col, int num)
{
	int row_end;
	int col_end;
	int col_tmp;

	if (row < N_S)
		row = 0;
	if (col < N_S)
		col = 0;
	while (row % N_S != 0)
		row--;
	while (col % N_S != 0)
		col--;
	row_end = row + N_S;
	col_end = col + N_S;
	while (row < row_end)
	{
		col_tmp = col;
		while (col_tmp < col_end)
		{
			if (sudoku[row][col_tmp] == num)
				return FALSE;
			col_tmp++;
		}
		row++;
	}
	return TRUE;
}

t_bool	check(int sudoku[N][N], int row, int col, int num)
{
	if (check_h(sudoku, row, col, num) == TRUE
			&& check_v(sudoku, row, col, num) == TRUE
			&& check_area(sudoku, row, col, num) == TRUE)
		return TRUE;
	else
		return FALSE;
}

t_bool	solve(int sudoku[N][N], int row, int col)
{
	int i;
	char str[80];

//	print_sudoku(sudoku);
	if (find_empty(sudoku, &row, &col) == FALSE)
	{
		return TRUE;
	}
//	printf("%d %d\n", row, col);
	i = 1;
	while (i <= N)
	{
		if (check(sudoku, row, col, i) == TRUE)
		{
			sudoku[row][col] = i;
//			print_sudoku(sudoku);
//			write(1, "\n", 1);
//			fgets(str, 10, stdin);
			if (solve(sudoku, row, col) == TRUE)
				return TRUE;
			sudoku[row][col] = 0;
		}
		i++;
	}
	return FALSE;
}

int		main(int argc, char **argv)
{
	int i;
	int n;
	int sudoku[N][N];

	//write(1, "invalid input\n", 14);
	if (check_input(argc, argv) == FALSE)
	{
		write(1, "invalid input\n", 14);
		return (0);
	}
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			if (argv[n][i] == '.')
				sudoku[n - 1][i] = 0;
			else
				sudoku[n - 1][i] = argv[n][i] - '0';
			i++;
		}
		n++;
	}
//	print_sudoku(sudoku);
	if (solve(sudoku, 0, 0) == TRUE)
		print_sudoku(sudoku);
	else
		write(1, "no sollution\n", 13);
}
