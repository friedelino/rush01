/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:39:14 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 15:21:31 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		ft_strlen(char *str);

void	ft_print(char *str);

char	**ft_split_cnt(char *str, int *words);

int		**strs_to_intsquare(char **strs, int n);

void	debug_output(int cmdline_nums, char **number_strings, int **square);

void	print_square(int **square, int n);

void	rush01_algorithm(int **input, int n);

#endif
