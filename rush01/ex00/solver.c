/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:19:48 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 23:20:40 by agrouard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "board.h"
#include "solver.h"
#include "board_valid.h"

int		g_num_solution_found = 0;
char	g_saved_board[9][9];

void	solve_board(char board[9][9])
{
	try_add_number(board, 0, 0);
	if (board_is_valid(g_saved_board) && g_num_solution_found == 1)
		print_board(g_saved_board);
	else
		ft_putstr("Error\n");
}

void	try_add_number(char board[9][9], int x, int y)
{
	if (x == 9)
	{
		x = 0;
		y = y + 1;
	}
	if (y == 9)
	{
		g_num_solution_found++;
		save_board(board);
	}
	else if (board[x][y] != '.')
	{
		try_add_number(board, x + 1, y);
	}
	else
		add_number(board, x, y);
}

void	add_number(char board[9][9], int x, int y)
{
	int num;

	num = '1';
	while (num <= '9')
	{
		if (position_is_available(board, num, x, y) == 1)
		{
			board[x][y] = num;
			try_add_number(board, x + 1, y);
			board[x][y] = '.';
		}
		num++;
	}
}

void	save_board(char board[9][9])
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			g_saved_board[x][y] = board[x][y];
			y++;
		}
		x++;
	}
}
