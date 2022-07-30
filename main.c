/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:15:51 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 08:58:08 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// only for DEBUG !!! remove later !!!
#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"

/* TODO:
 *
 * - write simple int atoi(char c) function which throws error if not a number
 * - we need to quit program with error msg in that case.
 * - write function for checking if numbers are valid
 * - function for solving
 *
 */

// works so far! call with: ./a.out "213 4325 123 5 5454 23 23" f.ex.
int	main(int ac, char **av)
{
	char	**number_strings;
	int	*num_array;
	int		nums;
	int		cnt;

	// TODO: move to seperate function error_handler(int ac);
	if (ac != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	number_strings = ft_split_cnt(av[1], &nums);
	num_array = strs_to_1to4(number_strings, nums);
	if (num_array == NULL)
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// DEBUG output
	cnt = 0;
	while (cnt < nums)
	{
		ft_print("str: ");
		ft_print(number_strings[cnt]);
		ft_print("\n");
		cnt++;
	}
	for(int i = 0; i < nums; i++)
		printf("num_array[%d] = %d\n", i, num_array[i]);
	// end DEBUG output

	free(number_strings);
	free(num_array);
}
