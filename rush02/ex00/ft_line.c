/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:16:38 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 22:57:56 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		ft_line(int x, char *carac, int i, char **tab)
{
	int j;

	if (!(tab[i] = (char *)malloc(sizeof(char) * (x + 2))))
		return (0);
	j = 0;
	if (x >= 1)
	{
		tab[i][j] = carac[0];
		j++;
	}
	while (j < (x - 1))
	{
		tab[i][j] = carac[1];
		j++;
	}
	if (x >= 2)
	{
		tab[i][j] = carac[2];
		j++;
	}
	tab[i][j] = '\n';
	j++;
	tab[i][j] = '\0';
	return (0);
}
