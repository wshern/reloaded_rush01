/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:48:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/24 21:44:51 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	i;
	int	grid[4][4];
	int	input[16];

	i = 0;
	if (!(argc == 2))
	{
		write(1, "Error!\n", 7);
		return (ERROR_MAIN);
	}
	logic_main(argc, argv, grid, input);
	return (0);
}

int	logic_main(int argc, char **argv, int grid[4][4], int input[16])
{
	if (argc == 2)
	{
		if (check_error(argv) == FALSE)
		{
			write(1, "Error!\n", 7);
			return (FALSE);
		}
		init_grid(grid);
		if (input_arr(argv, input) == TRUE)
		{
			if (solve(grid, input, 0) == TRUE)
				print_arr(grid);
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
