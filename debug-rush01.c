/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug-rush01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:28:00 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 14:31:07 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// FIXME DEBUG remove again !!!
#include <stdio.h>

void debug_output(int cmdline_nums, char ** number_strings, int *num_array)
{
	int cnt;

	cnt = 0;
	while (cnt < cmdline_nums)
	{
		ft_print("str: ");
		ft_print(number_strings[cnt]);
		ft_print("\n");
		cnt++;
	}
	for(int i = 0; i < cmdline_nums; i++)
		printf("num_array[%d] = %d\n", i, num_array[i]);
	// end DEBUG output
}
