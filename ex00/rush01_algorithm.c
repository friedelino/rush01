/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:33:32 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 16:27:52 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "allsquares.h"

int	rush01_algorithm(int **input, int n)
{
	int	sqcnt;
	int	row;
	int	col;
	int	allgood;

	sqcnt = -1;
	while (++sqcnt < 576)
	{
		allgood = 1;
		col = -1;
		while (++col < n)
		{
			if (i_can_see_col_up(sqcnt, col) != input[0][col] || \
			i_can_see_col_down(sqcnt, col) != input[1][col])
				allgood = 0;
		}
		row = -1;
		while (++row < n && allgood)
		{
			if (i_can_see_row_left(sqcnt, row) != input[2][row] || \
			i_can_see_row_right(sqcnt, row) != input[3][row])
				allgood = 0;
		}
		if (allgood)
			return (sqcnt);
	}
	return (-1);
}

// count number of towers i can see from up in column
int	i_can_see_col_up(int sqnum, int col)
{
	int	visible;
	int	rowcnt;
	int	max;

	visible = 1;
	rowcnt = 1;
	max = g_allsquares[sqnum][0][col];
	while (rowcnt < 4)
	{
		if (g_allsquares[sqnum][rowcnt][col] > max)
		{
			visible++;
			max = g_allsquares[sqnum][rowcnt][col];
		}
		rowcnt++;
	}
	return (visible);
}

// count number of towers i can see from down in column
int	i_can_see_col_down(int sqnum, int col)
{
	int	visible;
	int	rowcnt;
	int	max;

	visible = 1;
	rowcnt = 2;
	max = g_allsquares[sqnum][3][col];
	while (rowcnt >= 0)
	{
		if (g_allsquares[sqnum][rowcnt][col] > max)
		{
			visible++;
			max = g_allsquares[sqnum][rowcnt][col];
		}
		rowcnt--;
	}
	return (visible);
}

// count number of towers i can see from left in row
int	i_can_see_row_left(int sqnum, int row)
{
	int	visible;
	int	colcnt;
	int	max;

	visible = 1;
	colcnt = 1;
	max = g_allsquares[sqnum][row][0];
	while (colcnt < 4)
	{
		if (g_allsquares[sqnum][row][colcnt] > max)
		{
			visible++;
			max = g_allsquares[sqnum][row][colcnt];
		}
		colcnt++;
	}
	return (visible);
}

// count number of towers i can see from down in column
int	i_can_see_row_right(int sqnum, int row)
{
	int	visible;
	int	colcnt;
	int	max;

	visible = 1;
	colcnt = 2;
	max = g_allsquares[sqnum][row][3];
	while (colcnt >= 0)
	{
		if (g_allsquares[sqnum][colcnt][row] > max)
		{
			visible++;
			max = g_allsquares[sqnum][colcnt][row];
		}
		colcnt--;
	}
	return (visible);
}

// 2

// 1 -> g_allsquares[0][0][0]
// 4 -> g_allsquares[0][1][0]
// 3 -> g_allsquares[0][2][0]
// 2 -> g_allsquares[0][3][0]

// 3   2     1

// {1, 2, 3, 4},
// {2, 1, 4, 3},
// {3, 4, 1, 2},
// {4, 3, 2, 1}

// 1          4
