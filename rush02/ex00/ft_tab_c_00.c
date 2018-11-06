/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_c_00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:46:33 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 22:49:02 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	**ft_tab_c_00(int x, int y)
{
	int		i;
	char	**tab;
	char	*carac;

	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (y + 2))))
		return (0);
	carac = "o-o";
	if (y >= 1)
		ft_line(x, carac, i, tab);
	i++;
	carac = "| |";
	while (y > 2 && i < y - 1)
	{
		ft_line(x, carac, i, tab);
		i++;
	}
	carac = "o-o";
	if (y >= 2)
		ft_line(x, carac, i, tab);
	i = 0;
	return (tab);
}
