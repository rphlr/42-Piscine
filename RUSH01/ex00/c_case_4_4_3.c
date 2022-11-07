/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_case_4_4_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:05:47 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 22:05:50 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search_missing(int **numbers, int n_ieme);

void	case_0_0_4(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 0) && (board[1][i] == 0) && (board[2][i] == 4))
	{
		if (specificity[0][i] == 3)
		{
			board[0][i] = ft_search_missing(numbers, 1);
			board[1][i] = ft_search_missing(numbers, 2);
		}
		else if (specificity[0][i] == 2)
		{
			board[0][i] = ft_search_missing(numbers, 2);
			board[1][i] = ft_search_missing(numbers, 1);
		}
	}
}

void	case_0_0_4r(int **board, int **specificity, int **numbers, int i)
{
	if ((board[3][i] == 0) && (board[2][i] == 0) && (board[1][i] == 4))
	{
		if (specificity[1][i] == 3)
		{
			board[3][i] = ft_search_missing(numbers, 1);
			board[2][i] = ft_search_missing(numbers, 2);
		}
		else if (specificity[1][i] == 2)
		{
			board[3][i] = ft_search_missing(numbers, 2);
			board[2][i] = ft_search_missing(numbers, 1);
		}
	}
}

void	case_0_0_4_3(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 0) && (board[1][i] == 0) &&
			(board[2][i] == 4) && (board[3][i] == 3))
	{
		board[1][i] = 1;
		board[0][i] = 2;
	}
	if ((board[0][i] == 3) && (board[1][i] == 4) &&
			(board[2][i] == 0) && (board[3][i] == 0))
	{
		board[2][i] = 1;
		board[3][i] = 2;
	}
	if ((board[0][i] == 0) && (board[1][i] == 0) &&
			(board[2][i] == 3) && (board[3][i] == 4))
	{
		board[1][i] = 1;
		board[0][i] = 2;
	}
	if ((board[0][i] == 4) && (board[1][i] == 3) &&
			(board[2][i] == 0) && (board[3][i] == 0))
	{
		board[2][i] = 1;
		board[3][i] = 2;
	}
}
