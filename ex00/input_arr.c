/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likhye-y <likhye-y@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:39:45 by likhye-y          #+#    #+#             */
/*   Updated: 2026/07/24 17:58:49 by likhye-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	input_arr(char  **argv, int input[16])
{
	int	i;

	i = 0;
	while (i < 16 && argv[1][i * 2])
	{
		input[i] = argv[1][i * 2] - '0';
		// printf("input[i] = %d \n", input[i]);
		i++;
	}
	return (true);
}
