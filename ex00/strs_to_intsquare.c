/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs_to_1to4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:00:42 by fmaurer           #+#    #+#             */
/*   Updated: 2022/08/01 07:00:35 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"

/* strs_to_intsquare -- next step in the cmdline-args parsing process. takes as
 * input the 2dim-array of split-strings and the desired size of the rectangle
 * (for simple rush01: 4x4), and converts those strings, which should be only
 * whole number k s.t. 0 < k < 5, converts them to int and return them as a
 * int-array of size n.
 */
int	**strs_to_intsquare(char **strs, int n)
{
	int	**mem;
	int	j;
	int	k;

	mem = (int **) malloc((n * n) * sizeof (int *));
	if (mem == NULL)
		return (NULL);
	j = 0;
	while (j < n * n)
	{
		k = -1;
		mem[j / n] = (int *) malloc(n * sizeof (int));
		while (++k < n)
		{
			if (ft_strlen(strs[j]) != 1 || !('1' <= strs[j + k][0] && \
					strs[j + k][0] <= '0' + n))
				return (NULL);
			mem[j / n][k] = strs[j + k][0] - '0';
		}
		j += k;
	}
	return (mem);
}
