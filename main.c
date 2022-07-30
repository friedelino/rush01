/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:15:51 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 15:49:36 by fmaurer          ###   ########.fr       */
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
	int	**square;
	int		cmdline_nums;
	int		n;

	n = 4;
	// TODO: move to seperate function error_handler(int ac);
	if (ac != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	number_strings = ft_split_cnt(av[1], &cmdline_nums);
	square = strs_to_intsquare(number_strings, n);

	if (square == NULL || cmdline_nums != n*n || \
		!(4 <= n && n <= 9))
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// DEBUG output
	/* debug_output(n, number_strings, square); */
	// end DEBUG output
	print_square(square, n);

	free(number_strings);
	free(square);
}
