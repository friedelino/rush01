/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_cnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:17:18 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 19:08:24 by fmaurer          ###   ########.fr       */
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

/* ft_split -- returns split strings and the number of words */

void	ft_split_loop(char **mem, char *str, int *wordcnt, int len)
{
	int		j;
	int		k;
	int		inwdcnt;
	char	*wdstart;

	j = -1;
	inwdcnt = 0;
	wdstart = str;
	while (++j <= len)
	{
		if (str[j] == ' ' || str[j] == 0)
		{
			mem[*wordcnt] = (char *)malloc(inwdcnt * sizeof (char));
			k = -1;
			while (++k < inwdcnt)
				mem[*wordcnt][k] = wdstart[k];
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
	mem = (char **)malloc(4 * len * sizeof (char *));
	if (mem == NULL)
		return (NULL);
	ft_split_loop(mem, str, &wordcnt, len);
	*words = wordcnt;
	return (mem);
}
