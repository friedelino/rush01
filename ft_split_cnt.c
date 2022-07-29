/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_cnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:17:18 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/29 23:17:28 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	char *ptr;

	i = 0;
	ptr = str;
	while(*ptr)
	{
		ptr++;
		i++;
	}
	return (i);
}

/* ft_split -- returns split strings and the number of words
 *
 * TODO: in the end there should be something like ft_split_str_to_int. this
 * should return just all arguments already parsed into an int-array.
 *
 */
char **ft_split_cnt(char *str, int *words)
{
	char **mem;
	char *wdstart;
	int wordcnt;
	int inwdcnt;
	int j;
	int k;
	int len;

	j = 0;
	inwdcnt = 0;
	wordcnt = 0;
	wdstart = str;
	len = ft_strlen(str);
	mem = (char **)malloc(4 * len * sizeof (char *));
	if(mem == NULL)
		return (NULL);
	while(j <= len)
	{
		if(str[j] == ' ' || str[j] == 0)
		{
			mem[wordcnt] = (char *)malloc(inwdcnt * sizeof (char));
			k = 0;
			while (k < inwdcnt)
			{
				mem[wordcnt][k] = wdstart[k];
				k++;
			}
			wordcnt++;
			wdstart = &str[j + 1];
			inwdcnt = 0;
		}
		j++;
		inwdcnt++;
	}
	*words = wordcnt;
	return (mem);
}
