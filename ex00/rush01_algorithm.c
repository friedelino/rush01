/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:33:32 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 15:29:16 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "allsquares.h"

void	rush01_algorithm(int **input, int n)
{

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
		if (g_allsquares[sqnum][colcnt][col] > max)
		{
			visible++;
			max = g_allsquares[sqnum][colcnt][col];
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
