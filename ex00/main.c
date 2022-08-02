/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:15:51 by fmaurer           #+#    #+#             */
/*   Updated: 2022/08/02 12:56:53 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "allsquares.h"

// wrong free
//
// void	error_or_free(char **number_strings, int **input, int err)
// {
// 	if (err)
// 		write(2, "Error\n", 6);
// 	free(number_strings);
// 	free(input);
// }
void	error_or_free_all(char **number_strings, int **input, int err)
{
	int freecnt;

	freecnt = -1;
	if (err)
		write(2, "Error\n", 6);
	while(++freecnt < 16)
		free(number_strings[freecnt]);
	free(number_strings);
	freecnt = -1;
	if(input != NULL)
		while (++freecnt < 4)
			free(input[freecnt]);
	free(input);
}


void	error_or_free_number_strings(char **number_strings, int wordcnt)
{
	int freecnt;

	freecnt = -1;
	write(2, "Error\n", 6);
	while(++freecnt < wordcnt)
		free(number_strings[freecnt]);
	free(number_strings);
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
	if (number_strings == NULL || dummy != 16)
	{
		error_or_free_number_strings(number_strings, dummy);
		return (1);
	}
	input = strs_to_intsquare(number_strings, 4);
	if (input == NULL )
	{
		error_or_free_all(number_strings, input, 1);
		return (1);
	}
	dummy = rush01_algorithm(input, 4);
	if (0 <= dummy && dummy < 576)
		print_square(g_allsquares[dummy], 4);
	else
	{
		error_or_free_all(number_strings, input, 1);
		return (1);
	}
	error_or_free_all(number_strings, input, 0);
}
