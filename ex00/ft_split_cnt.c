/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_cnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:17:18 by fmaurer           #+#    #+#             */
/*   Updated: 2022/08/02 13:39:26 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = str;
	while (*ptr)
	{
		ptr++;
		i++;
	}
	return (i);
}

/* ft_split -- returns split strings and the number of words.. we have to
 * malloc (inwdcnt + 1) bytes in order to append '\0' to every substring we
 * find */
void	ft_split_loop(char **mem, char *str, int *wordcnt, int len)
{
	int		j;
	int		k;
	int		inwdcnt;
	char	*wdstart;

	j = -1;
	inwdcnt = 0;
	wdstart = str;
	while (len && ++j <= len)
	{
		if (str[j] == ' ' || str[j] == 0)
		{
			mem[*wordcnt] = (char *)malloc((inwdcnt + 1) * sizeof (char));
			k = -1;
			while (++k < inwdcnt)
				mem[*wordcnt][k] = wdstart[k];
			mem[*wordcnt][k] = '\0';
			(*wordcnt)++;
			wdstart = &str[j + 1];
			inwdcnt = 0;
		}
		else
			inwdcnt++;
	}
}

char	**ft_split_cnt(char *str, int *words)
{
	char	**mem;
	int		wordcnt;
	int		len;

	wordcnt = 0;
	len = ft_strlen(str);
	mem = (char **)malloc(len * sizeof (char *));
	if (mem == NULL)
		return (NULL);
	ft_split_loop(mem, str, &wordcnt, len);
	*words = wordcnt;
	return (mem);
}
