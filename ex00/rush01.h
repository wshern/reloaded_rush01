/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:51:28 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/25 14:14:16 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# define TRUE 1
# define FALSE 0
# define ERROR_MAIN -1

# include <unistd.h>

/* Parsing */
void	init_grid(int grid[4][4]);
int		logic_main(int argc, char **argv, int grid[4][4], int clue[16]);
int		check_error(char **argv);
int		input_arr(char **argv, int clue[16]);
void	print_arr(int grid[4][4]);

/* Solve Algo */
int		duplicate(int grid[4][4], int row, int col, int num);
int		vis_count(int *line, int start, int direction);
int		check_vis(int *line, int clue, int start, int direction);
void	convert_col(int grid[4][4], int col_num, int *col);
int		check_rowcol_vis(int grid[4][4], int clue[16], int row, int col);
int		solve(int grid[4][4], int clue[16], int pos);

#endif
