/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehong <ehong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:40:51 by ehong             #+#    #+#             */
/*   Updated: 2020/08/16 16:46:33 by ehong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_valid(char board[10], int row, int col)
{
	int		temp_row;

	temp_row = row - 1;
	while (temp_row >= 0)
	{
		if (board[temp_row] == col)
			return (0);
		if (board[temp_row] == col - (row - temp_row))
			return (0);
		if (board[temp_row] == col + (row - temp_row))
			return (0);
		temp_row--;
	}
	return (1);
}

void		dfs(char board[10], int row, int *count)
{
	char	col;

	if (row == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		(*count)++;
		return ;
	}
	col = '0';
	while (col <= '9')
	{
		if (is_valid(board, row, col))
		{
			board[row] = col;
			dfs(board, row + 1, count);
		}
		col++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		count;

	count = 0;
	dfs(board, 0, &count);
	return (count);
}
