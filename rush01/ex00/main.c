/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:57:27 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 23:16:14 by agrouard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "solver.h"

int		char_is_invalid(char c)
{
	if (c == '\0')
		return (1);
	if (c >= '0' && c <= '9')
		return (0);
	else if (c == '.')
		return (0);
	else
		return (1);
}

int		load_board(char board[9][9], char **argv)
{
	int i;
	int	j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (char_is_invalid(argv[i][j]) == 1)
				return (0);
			board[j][i - 1] = argv[i][j];
			j++;
		}
		if (argv[i][9] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	char	board[9][9];

	if (argc != 10)
		ft_putstr("Error\n");
	else
	{
		if (load_board(board, argv) == 0)
			ft_putstr("Error\n");
		else
			solve_board(board);
	}
}
