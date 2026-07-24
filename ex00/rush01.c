/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:18:05 by hbinti-d          #+#    #+#             */
/*   Updated: 2026/07/24 18:24:47 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	solve(int grid[4][4], int input[16], int pos)
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
			if (check_all_vis(grid, input, row, col) == 1)
			{
				if (solve(grid, input, pos + 1) == 1)
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
