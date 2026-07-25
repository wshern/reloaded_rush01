/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 19:09:41 by hbinti-d          #+#    #+#             */
/*   Updated: 2026/07/25 13:43:21 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	solve(int grid[4][4], int clue[16], int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num >= 1 && num <= 4)
	{
		if (duplicate(grid, row, col, num) == 0)
		{
			grid[row][col] = num;
			if (check_rowcol_vis(grid, clue, row, col) == 1)
			{
				if (solve(grid, clue, pos + 1) == 1)
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
