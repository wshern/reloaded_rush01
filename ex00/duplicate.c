/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: werlim <werlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:33:14 by werlim            #+#    #+#             */
/*   Updated: 2026/07/25 13:40:02 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	duplicate(int grid[4][4], int row, int col, int num)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (1);
		i++;
	}
	j = 0;
	while (j < 4)
	{
		if (grid[j][col] == num)
			return (1);
		j++;
	}
	return (0);
}
