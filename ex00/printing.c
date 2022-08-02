/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:08:43 by fmaurer           #+#    #+#             */
/*   Updated: 2022/08/02 11:29:22 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_print(char *str)
{
	int	bytes;

	bytes = ft_strlen(str);
	write(1, str, bytes);
}

void	print_square(const int square[4][4], int n)
{
	int		j;
	int		k;
	char	c;

	j = 0;
	k = 0;
	while (j < n)
	{
		k = -1;
		while (++k < n)
		{
			c = '0' + square[j][k];
			write(1, &c, 1);
			if (!k || k % (n-1))
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		j++;
	}
}
