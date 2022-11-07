/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decide_columns.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:06:22 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 23:11:03 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_missing_colomn(int **board, int map_size, int **numbers, int i);
int	ft_search_missing(int **numbers, int n_ieme);

void	numbers_initial(int **numbers, int **numbers2)
{
	numbers = malloc(sizeof(int *) * 2);
	numbers[0] = malloc(sizeof(int) * 4);
	numbers[1] = malloc(sizeof(int) * 4);
	numbers2 = malloc(sizeof(int *) * 2);
	numbers2[0] = malloc(sizeof(int) * 4);
	numbers2[1] = malloc(sizeof(int) * 4);
}

void	number_update(int **numbers)
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

int	ft_search_index(int **number, int **board, int i)
{
	number_update(number);
	return (ft_missing_colomn(board, 4, number, i) == 2);
}

void	ft_change(int **numbers, int **numbers2, int line1, int **board)
{
	if ((numbers[1][0] == numbers2[1][0]) && (numbers[1][1] == numbers2[1][1]))
	{
		if ((ft_search_missing(numbers, 1) == ft_search_missing(numbers2, 1))
			&& (ft_search_missing(numbers, 2)
				== ft_search_missing(numbers2, 2)))
			board[numbers[1][0]][line1] = ft_search_missing(numbers, 1);
	}
}

void	ft_decide_columns(int **board)
{
	int	**numbers;
	int	**numbers2;
	int	i;
	int	line1;

	numbers_initial(numbers, numbers2);
	i = -1;
	while (++i < 4)
	{
		if (ft_search_index(numbers, board, i))
			break ;
	}
	line1 = i;
	while (++i < 4)
	{
		if (ft_search_index(numbers2, board, i))
			break ;
	}
	if (line1 != i)
	{
		ft_change(numbers, numbers2, line1, board);
	}
}
