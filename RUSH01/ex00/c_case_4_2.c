/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_case_4_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:05:36 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 22:05:39 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	case_4_2(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 0) && (board[1][i] == 0) &&
			(board[2][i] == 2) && (board[3][i] == 4))
	{
		if (specificity[0][i] == 3)
		{
			board[1][i] = 3;
			board[0][i] = 1;
		}
	}
	if ((board[0][i] == 4) && (board[1][i] == 2) &&
			(board[2][i] == 0) && (board[3][i] == 0))
	{
		if (specificity[1][i] == 3)
		{
			board[2][i] = 3;
			board[3][i] = 1;
		}
	}
}

void	case_0_4_2(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 0) && (board[1][i] == 4) &
			(board[2][i] == 2) && (board[3][i] == 0))
	{
		if (specificity[1][i] == 3)
		{
			board[0][i] = 3;
			board[3][i] = 1;
		}
		if (specificity[1][i] == 2)
		{
			board[0][i] = 1;
			board[3][i] = 3;
		}
	}
}

void	case_0_4_2r(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 0) && (board[1][i] == 2) &&
			(board[2][i] == 4) && (board[3][i] == 0))
	{
		if (specificity[0][i] == 3)
		{
			board[0][i] = 1;
			board[3][i] = 3;
		}
		if (specificity[0][i] == 2)
		{
			board[0][i] = 3;
			board[3][i] = 1;
		}
	}
}
