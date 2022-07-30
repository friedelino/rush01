/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug-rush01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:28:00 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 15:25:03 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// FIXME DEBUG remove again !!!
#include <stdio.h>

void debug_output(int n, char **number_strings, int **square)
{
	int cnt;

	cnt = 0;
	while (cnt < n*n)
	{
		ft_print("str: ");
		ft_print(number_strings[cnt]);
		ft_print("\n");
		cnt++;
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			printf("square[%d][%d] = %d\n", i, j, square[i][j]);
	// end DEBUG output
}
