/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:08:43 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 08:26:55 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_print(char *str)
{
	int	bytes;

	bytes = ft_strlen(str);
	write(1, str, bytes);
}
