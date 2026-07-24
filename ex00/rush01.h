/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:51:28 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/24 18:09:03 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# define true 1
# define false 0
# define error_main -1

# include <unistd.h>
# include <stdio.h>

void	init_grid(int grid[4][4]);
int		input_arr(char  **argv, int input[16]);
int		check_error	(char **argv);
void	print_arr(int grid[4][4]);
// int	solve(int grid[4][4], int input[16], int pos);

#endif