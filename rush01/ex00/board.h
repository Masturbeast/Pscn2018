/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:08:30 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 21:09:15 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOARD_H
# define FT_BOARD_H

void	print_board(char board[9][9]);

int		board_is_invalid(char board[9][9]);
int		position_is_available(char tab[9][9], char nbr, int x, int y);

#endif
