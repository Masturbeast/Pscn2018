/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:41:43 by atep              #+#    #+#             */
/*   Updated: 2018/08/22 14:01:33 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;
	int size;
	int m;

	m = min;
	size = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (size));
	if (tab == 0)
		return (0);
	i = 0;
	while (m < max)
	{
		tab[i] = m;
		m++;
		i++;
	}
	return (tab);
}
