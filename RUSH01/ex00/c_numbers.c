/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_numbers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:06:09 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 22:06:12 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_init_numbers(int **numbers)
{
	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
}

void	ft_update_numbers(int **numbers)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		numbers[0][j] = j + 1;
		numbers[1][j] = -1;
		j++;
	}
}
