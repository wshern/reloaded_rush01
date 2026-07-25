/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 21:13:21 by hbinti-d          #+#    #+#             */
/*   Updated: 2026/07/25 13:39:51 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	convert_col(int grid[4][4], int col_num, int *col)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		col[row] = grid[row][col_num];
		row++;
	}
	return ;
}
