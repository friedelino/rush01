/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs_to_1to4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:00:42 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 14:25:47 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DEBUG
#include <stdio.h>

#include <stdlib.h>
#include "rush01.h"

int	*strs_to_1to4(char **strs, int n)
{
	int	*mem;
	int	j;

	mem = (int *) malloc(n * sizeof (int));
	if (mem == NULL)
		return (NULL);
	j = -1;
	while (++j < n)
	{
		if (ft_strlen(strs[j]) != 1 || !('1' <= strs[j][0] && \
				strs[j][0] <= '4'))
				return (NULL);
		mem[j] = strs[j][0] - '0';
	}
	return (mem);
}
