/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:39:14 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/30 15:49:12 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str);

void	ft_print(char *str);

char	**ft_split_cnt(char *str, int *words);

int	**strs_to_intsquare(char **strs, int n);

void	debug_output(int cmdline_nums, char ** number_strings, int **square);

void	print_square(int **square, int n);


