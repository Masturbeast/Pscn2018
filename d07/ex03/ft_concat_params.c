/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:52:59 by atep              #+#    #+#             */
/*   Updated: 2018/08/22 18:22:53 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_str(int argc, char **argv)
{
	int		i;
	int		j;
	int		nb;

	nb = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			nb++;
		}
		nb++;
		i++;
	}
	return (nb);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		k;
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_count_str(argc, argv));
	if (str == 0)
		return (0);
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
