/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:48:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/25 14:19:59 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clue[16];

	if (!(argc == 2))
	{
		write(1, "Error!\n", 7);
		return (ERROR_MAIN);
	}
	logic_main(argc, argv, grid, clue);
	return (0);
}

int	logic_main(int argc, char **argv, int grid[4][4], int clue[16])
{
	if (argc == 2)
	{
		if (check_error(argv) == FALSE)
		{
			write(1, "Error!\n", 7);
			return (ERROR_MAIN);
		}
		init_grid(grid);
		if (input_arr(argv, clue) == TRUE)
		{
			if (solve(grid, clue, 0) == TRUE)
				print_arr(grid);
			else
			{
				write(1, "Error!\n", 7);
				return (ERROR_MAIN);
			}
		}
		else
		{
			write(1, "Error!\n", 7);
			return (ERROR_MAIN);
		}
	}
	return (TRUE);
}

int	check_error(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (!((argv[1][i] >= '1' && argv[1][i] <= '4') || (argv[1][i] == ' ')))
			return (FALSE);
		i++;
	}
	if (i != 31)
		return (FALSE);
	return (TRUE);
}
