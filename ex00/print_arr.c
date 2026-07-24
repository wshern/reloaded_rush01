/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:03:43 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/24 21:30:34 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_arr(int grid[4][4])
{
	int	row_x;
	int	col_y;
	int	num;

	col_y = 0;
	while (col_y < 4)
	{
		row_x = 0;
		while (row_x < 4)
		{
			num = grid[col_y][row_x] + '0';
			write(1, &num, 1);
			if (row_x != 3)
				write(1, " ", 1);
			row_x++;
		}
		write(1, "\n", 1);
		col_y++;
	}
}
