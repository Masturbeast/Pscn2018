/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 19:31:42 by atep              #+#    #+#             */
/*   Updated: 2018/08/22 18:22:24 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int size;
	int m;

	m = min;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (size));
	if (tab == 0)
		return (0);
	i = 0;
	while (m <= max - 1)
	{
		tab[i] = m;
		m++;
		i++;
	}
	*range = tab;
	return (i);
}
