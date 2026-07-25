/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:47:58 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/25 13:40:13 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init_grid(int grid[4][4])
{
	int	row_x;
	int	col_y;

	col_y = 0;
	while (col_y < 4)
	{
		row_x = 0;
		while (row_x < 4)
		{
			grid[col_y][row_x] = 0;
			row_x++;
		}
		col_y++;
	}
}
