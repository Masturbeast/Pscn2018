/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:34:49 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 23:14:31 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	**ft_tab_to_cmp(int *line, int *col, char *tab)
{
	char		buf;
	int			s_buf;
	int			i;
	int			j;

	i = 0;
	j = 0;
	s_buf = 1;
	while (read(STDIN_FILENO, &buf, s_buf))
	{
		if (i == 0)
		{
			if (ft_1st_check(buf) == 1)
				return (0);
		}
		tab = ft_strdupcat(tab, buf);
		if (buf != '\n')
			i++;
		else
			j++;
	}
	*col = i / j;
	*line = j;
	return (ft_split_whitespaces(tab));
}
