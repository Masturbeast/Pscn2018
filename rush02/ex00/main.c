/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:16:03 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 23:07:57 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		main(void)
{
	int		line;
	int		col;
	char	**tabmain;
	char	tab[1];

	line = 0;
	col = 0;
	tab[0] = '\0';
	write(1,"main.c 1\n", 10);
	tabmain = ft_tab_to_cmp(&line, &col, tab);
	write(1,"main.c 2\n", 10);
	ft_write_result(line, col, tabmain);
	write(1,"main.c 3\n", 10);
	return (0);
}
