/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:39:14 by fmaurer           #+#    #+#             */
/*   Updated: 2022/07/31 18:36:52 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		ft_strlen(char *str);

void	ft_print(char *str);

char	**ft_split_cnt(char *str, int *words);

int		**strs_to_intsquare(char **strs, int n);

void	debug_output(int cmdline_nums, char **number_strings, int **square);

void	print_square(const int square[4][4], int n);

int		rush01_algorithm(int **input, int n);

int		i_can_see_col_up(int sqnum, int col);

int		i_can_see_col_down(int sqnum, int col);

int		i_can_see_row_left(int sqnum, int row);

int		i_can_see_row_right(int sqnum, int row);

#endif
