/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:15:51 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 08:29:35 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_split_cnt(char *str, int *words);

void	ft_print(char *str);

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
	int		nums;
	int		cnt;

	if (ac != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	number_strings = ft_split_cnt(av[1], &nums);
	cnt = 0;
	while (cnt < nums)
	{
		ft_print("str: ");
		ft_print(number_strings[cnt]);
		ft_print("\n");
		cnt++;
	}
	free(number_strings);
}
