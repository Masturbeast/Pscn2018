/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:22:24 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 18:37:24 by mdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int		ft_spechar(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int		i;
	int		nbr_word;

	i = 0;
	nbr_word = 0;
	while (str[i] != '\0')
	{
		while (ft_spechar(str[i]) == 1 && str[i])
			i++;
		if (ft_spechar(str[i]) == 0 && str[i])
		{
			nbr_word++;
			while ((ft_spechar(str[i]) == 0) && str[i])
				i++;
		}
	}
	return (nbr_word);
}

int		ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		x;
	int		y;
	int		i;

	tab = (char **)malloc(sizeof(char *) * (ft_count_words(str) + 1));
	i = 0;
	y = 0;
	while (y < (ft_count_words(str)) && str[i] != '\0')
	{
		x = 0;
		while (ft_spechar(str[i]) == 1)
			i++;
		tab[y] = (char *)malloc(sizeof(char) * (ft_len(str)));
		while (ft_spechar(str[i]) == 0)
		{
			tab[y][x] = str[i];
			i++;
			x++;
		}
		tab[y][x] = '\0';
		y++;
	}
	tab[y] = 0;
	return (tab);
}
