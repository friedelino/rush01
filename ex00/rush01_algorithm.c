/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:33:32 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 19:11:05 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	rush01_algo_inner_loop(int *allgood, int sqcnt, int **input, int n)
{
	int	col;
	int	row;

	col = -1;
	while (++col < n)
	{
		if (i_can_see_col_up(sqcnt, col) != input[0][col] || \
		i_can_see_col_down(sqcnt, col) != input[1][col])
			*allgood = 0;
	}
	row = -1;
	while (++row < n && *allgood)
	{
		if (i_can_see_row_left(sqcnt, row) != input[2][row] || \
		i_can_see_row_right(sqcnt, row) != input[3][row])
			*allgood = 0;
	}
}

int	rush01_algorithm(int **input, int n)
{
	int	sqcnt;
	int	allgood;

	sqcnt = -1;
	while (++sqcnt < 576)
	{
		allgood = 1;
		rush01_algo_inner_loop(&allgood, sqcnt, input, n);
		if (allgood)
			return (sqcnt);
	}
	return (-1);
}
