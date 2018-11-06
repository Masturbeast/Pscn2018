/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:54:25 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 23:18:46 by agrouard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_line_sum(char board[9][9])
{
	int x;
	int y;
	int sum;

	y = 0;
	while (y < 9)
	{
		x = 0;
		sum = 0;
		while (x < 9)
		{
			sum += board[x][y] - '0';
			x++;
		}
		if (sum != 45)
			return (0);
		y++;
	}
	return (1);
}

int		check_column_sum(char board[9][9])
{
	int x;
	int y;
	int sum;

	x = 0;
	while (x < 9)
	{
		y = 0;
		sum = 0;
		while (y < 9)
		{
			sum += board[x][y] - '0';
			y++;
		}
		if (sum != 45)
			return (0);
		x++;
	}
	return (1);
}

int		check_region_sum(char board[9][9], int rx, int ry)
{
	int x;
	int y;
	int sum;

	x = rx;
	sum = 0;
	while (x < rx + 3)
	{
		y = ry;
		while (y < ry + 3)
		{
			sum += board[x][y] - '0';
			y++;
		}
		x++;
	}
	if (sum != 45)
		return (0);
	return (1);
}

int		check_regions_sum(char board[9][9])
{
	int rx;
	int ry;

	rx = 0;
	while (rx < 9)
	{
		ry = 0;
		while (ry < 9)
		{
			if (check_region_sum(board, rx, ry) == 0)
				return (0);
			ry += 3;
		}
		rx += 3;
	}
	return (1);
}

int		board_is_valid(char board[9][9])
{
	if (check_line_sum(board) == 0)
		return (0);
	if (check_column_sum(board) == 0)
		return (0);
	if (check_regions_sum(board) == 0)
		return (0);
	return (1);
}
