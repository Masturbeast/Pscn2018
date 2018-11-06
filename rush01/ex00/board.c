/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:08:49 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 21:27:59 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_board(char board[9][9])
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putchar(board[x][y]);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		column_is_available(char board[9][9], char nbr, int x)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (board[x][y] == nbr)
			return (0);
		y++;
	}
	return (1);
}

int		line_is_available(char board[9][9], char nbr, int y)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (board[x][y] == nbr)
			return (0);
		x++;
	}
	return (1);
}

int		region_is_available(char board[9][9], char nbr, int x, int y)
{
	int rx;
	int ry;
	int i;
	int j;

	rx = x - (x % 3);
	ry = y - (y % 3);
	i = rx;
	while (i < (rx + 3))
	{
		j = ry;
		while (j < (ry + 3))
		{
			if (board[i][j] == nbr)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		position_is_available(char board[9][9], char nbr, int x, int y)
{
	if (column_is_available(board, nbr, x) == 0)
		return (0);
	if (line_is_available(board, nbr, y) == 0)
		return (0);
	if (region_is_available(board, nbr, x, y) == 0)
		return (0);
	return (1);
}
