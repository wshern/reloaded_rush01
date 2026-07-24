/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:48:02 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/24 17:59:34 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	i;

	int	grid[4][4];
	int	input[16];
	// int	pos;

	i = 0;
	// pos = 0;
	if (!(argc == 2))
	{
		write(1 , "Error!\n", 7);
		return (error_main);
	}

	if (argc == 2)
	{
		if (check_error(argv) == false)
		{
			write(1 , "Error!\n", 7);
			return (false);
		}
		init_grid(grid);
		if (input_arr(argv, input) == true)
			printf("It works!");
			// solve(grid, input, pos);
		else
		{
			write(1 , "Error!\n", 7);
			return (error_main);
		}
		i++;
	}
	return (0);
}

int	check_error(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (!((argv[1][i] >= '1' && argv[1][i] <= '4') || (argv[1][i] == ' ')))
			return (false);
		i++;
	}
	if (i != 31)
		return (false);
	return (true);
}

