/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:11:07 by atep              #+#    #+#             */
/*   Updated: 2018/08/09 03:44:59 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int a;
	int r;

	r = 0;
	a = 1;
	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	if (str[i] == 45)
		a = -1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + (int)str[i] - 48;
		i++;
	}
	return (a * r);
}
