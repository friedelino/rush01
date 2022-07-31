/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:15:51 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 19:01:44 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "allsquares.h"

void	error_or_free(char **number_strings, int **input, int err)
{
	if (err)
		write(2, "Error\n", 6);
	free(number_strings);
	free(input);
}

int	main(int ac, char **av)
{
	char	**number_strings;
	int		**input;
	int		dummy;

	if (ac != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	number_strings = ft_split_cnt(av[1], &dummy);
	input = strs_to_intsquare(number_strings, 4);
	if (input == NULL || dummy != 16)
	{
		error_or_free(number_strings, input, 1);
		return (1);
	}
	dummy = rush01_algorithm(input, 4);
	if (0 <= dummy && dummy < 576)
		print_square(g_allsquares[dummy], 4);
	else
	{
		error_or_free(number_strings, input, 1);
		return (1);
	}
	error_or_free(number_strings, input, 0);
}
