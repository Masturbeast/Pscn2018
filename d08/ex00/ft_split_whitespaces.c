/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:56:36 by atep              #+#    #+#             */
/*   Updated: 2018/08/22 15:18:07 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_whitespaces(char c)
{
	if (c == 32 || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_count_words(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (ft_whitespaces(str[i]) == 1 && str[i])
			i++;
		if (ft_whitespaces(str[i]) == 0 && str[i])
		{
			n++;
			while (ft_whitespaces(str[i]) == 0 && str[i])
				i++;
		}
	}
	return (n);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(sizeof(char *) * (ft_count_words(str) + 1));
	i = 0;
	k = 0;
	while (k < (ft_count_words(str)) && str[i] != '\0')
	{
		j = 0;
		while (ft_whitespaces(str[i]) == 1 && str[i])
			i++;
		tab[k] = (char *)malloc(sizeof(char) * (ft_strlen(str)));
		while (ft_whitespaces(str[i]) == 0 && str[i])
		{
			tab[k][j] = str[i];
			i++;
			j++;
		}
		tab[k][j] = '\0';
		k++;
	}
	tab[k] = 0;
	return (tab);
}
