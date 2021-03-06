/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:42:46 by atep              #+#    #+#             */
/*   Updated: 2018/08/07 16:13:27 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int a;
	int r;

	i = 0;
	a = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == 45)
		a = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10 + (int)str[i] - 48;
		i++;
	}
	return (a * r);
}
