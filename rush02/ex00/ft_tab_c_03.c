/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_c_03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:48:02 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 19:18:49 by mdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	**ft_tab_c_03(int x, int y)
{
	int		i;
	char	**tab;
	char	*carac;

	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (y + 1))))
		return (0);
	carac = "ABC";
	if (y >= 1)
		ft_line(x, carac, i, tab);
	i = 1;
	carac = "B B";
	while (y > 2 && i < y - 1)
	{
		ft_line(x, carac, i, tab);
		i++;
	}
	carac = "ABC";
	if (y >= 2)
		ft_line(x, carac, i, tab);
	i = 0;
	return (tab);
}
