/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complet_column.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:31:15 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 21:31:21 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_search_missing(int **numbers, int n_ieme);
int		ft_missing_colomn(int **board, int map_size, int **numbers, int i);
void	ft_init_numbers(int **numbers);
void	ft_update_numbers(int **numbers);
void	case_0_0_4(int **board, int **specificity, int **numbers, int i);
void	case_0_0_4r(int **board, int **specificity, int **numbers, int i);
void	case_0_0_4_3(int **board, int **specificity, int **numbers, int i);
void	case_4_2(int **board, int **specificity, int **numbers, int i);
void	case_0_4_2(int **board, int **specificity, int **numbers, int i);
void	case_0_4_2r(int **board, int **specificity, int **numbers, int i);
void	case_4_0_1(int **board, int **specificity, int **numbers, int i);
void	case_4_1(int **board, int **specificity, int **numbers, int i);

void	two_zero_case(int **board, int **specificity, int **numbers, int i)
{
	case_0_0_4(board, specificity, numbers, i);
	case_0_0_4r(board, specificity, numbers, i);
	case_0_0_4_3(board, specificity, numbers, i);
	case_4_2(board, specificity, numbers, i);
	case_0_4_2(board, specificity, numbers, i);
	case_0_4_2r(board, specificity, numbers, i);
	case_4_0_1(board, specificity, numbers, i);
	case_4_1(board, specificity, numbers, i);
}

void	ft_complett_column(int **board, int **specificity, int map_size)
{
	int	i;
	int	j;
	int	nb_zero;
	int	**numbers;

	ft_init_numbers(numbers);
	i = -1;
	while (++i < map_size)
	{
		ft_update_numbers(numbers);
		nb_zero = ft_missing_colomn(board, map_size, numbers, i);
		if (nb_zero == 1)
		{
			board[numbers[1][0]][i] = ft_search_missing(numbers, 1);
		}
		else if (nb_zero == 2)
		{
			two_zero_case(board, specificity, numbers, i);
		}
	}
	free(numbers[0]);
	free(numbers[1]);
	free(numbers);
}
