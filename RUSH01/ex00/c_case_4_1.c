/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_case_4_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenaud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:05:25 by asenaud           #+#    #+#             */
/*   Updated: 2022/09/11 22:05:28 by asenaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	case_4_0_1(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 4) && (board[1][i] == 0) &&
			(board[2][i] == 1) && (board[3][i] == 0))
	{
		if (specificity[1][i] == 3)
		{
			board[1][i] = 3;
			board[3][i] = 2;
		}
	}
	if ((board[0][i] == 0) && (board[1][i] == 1) &&
			(board[2][i] == 0) && (board[3][i] == 4))
	{
		if (specificity[0][i] == 3)
		{
			board[0][i] = 2;
			board[2][i] = 3;
		}
	}
}

void	case_4_1(int **board, int **specificity, int **numbers, int i)
{
	if ((board[0][i] == 4) && (board[1][i] == 1) &&
			(board[2][i] == 0) && (board[3][i] == 0))
	{
		board[2][i] = 2;
		board[3][i] = 3;
	}
	if ((board[0][i] == 0) && (board[1][i] == 0) &&
			(board[2][i] == 1) && (board[3][i] == 4))
	{
		board[0][i] = 3;
		board[1][i] = 2;
	}
}
