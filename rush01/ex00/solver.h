/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:20:26 by atep              #+#    #+#             */
/*   Updated: 2018/08/12 21:27:59 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

void	solve_board(char board[9][9]);

void	add_number(char board[9][9], int x, int y);
void	try_add_number(char board[9][9], int x, int y);

void	save_board(char board[9][9]);

#endif
