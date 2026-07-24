/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:40:26 by werlim            #+#    #+#             */
/*   Updated: 2026/07/24 20:04:41 by werlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vis_count(int *line, int start, int direction)
{
	int current_max;
	int	vis_num;
	int	i;

	current_max = 0;
	vis_num = 0;
	i = start;
	while (i >= 0 && j < 4)
	{
		if (line[i] > current_max)
		{
			vis_num++;
			current_max = line[i];
		}
		i += direction;
	}
	return (vis_num);
}

int	check_vis(int *line, int clue, int start, int direction)
{
	if (vis_count(line, start, direction) == clue)
		return (1);
	return (0);
}

int	check_rowcol_vis(int grid[4][4], int clue[16], int row, int col)
{
	int	temp_col[4];

	if (col == 3)
	{
		if (check_vis(grid[row], clue[8 + row], 0, 1) == 0
				|| check_vis(grid[row], clue[12 + row], 3, -1) == 0)
			return (0);
	}
	if (row == 3)
	{
		convert_col(grid, col, temp_col);
		if (check_vis(temp_col, clue[col], 0, 1) == 0
				|| check_vis(temp_col, clue[col + 4], 3, -1) == 0)
			return (0);
	}
	return (1);
}
