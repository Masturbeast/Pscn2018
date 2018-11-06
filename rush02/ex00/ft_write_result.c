/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:44:07 by atep              #+#    #+#             */
/*   Updated: 2018/08/19 23:14:51 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void	ft_display(int x, int y, int n)
{
	ft_putstr("[colle-0");
	ft_putnbr(n);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	ft_write_error(int *stat)
{
	if (*stat == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

void	ft_write_result2(int x, int y, char **tabmain)
{
	int stat;

	stat = 0;
	if (ft_tab_comp(ft_tab_c_00(x, y), tabmain, stat) == '1')
		ft_display(x, y, 0);
	if (ft_tab_comp(ft_tab_c_01(x, y), tabmain, stat) == '1')
		ft_display(x, y, 1);
}

void	ft_write_result(int x, int y, char **tabmain)
{
	int i;
	int stat;

	stat = 0;
	ft_write_result2(x, y, tabmain);
	i = 0;
	if (ft_tab_comp(ft_tab_c_02(x, y), tabmain, stat) == '1')
	{
		ft_display(x, y, 2);
		i++;
	}
	if (ft_tab_comp(ft_tab_c_03(x, y), tabmain, stat) == '1')
	{
		if (i > 0)
			ft_putstr(" || ");
		ft_display(x, y, 3);
		i++;
	}
	if (ft_tab_comp(ft_tab_c_04(x, y), tabmain, stat) == '1')
	{
		if (i >= 1)
			ft_putstr(" || ");
		ft_display(x, y, 4);
	}
	ft_write_error(&stat);
}
