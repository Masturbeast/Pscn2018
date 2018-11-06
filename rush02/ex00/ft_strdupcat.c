/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:46:09 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 16:47:33 by mdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	*ft_strdupcat(char *str, char buf)
{
	int		i;
	int		len_str;
	char	*cpy;

	len_str = ft_strlen(str);
	i = 0;
	if ((cpy = (char*)malloc(sizeof(char) * len_str + 2)) == 0)
		return (0);
	while (i < len_str)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = buf;
	cpy[i + 1] = '\0';
	str = cpy;
	free(cpy);
	return (str);
}
