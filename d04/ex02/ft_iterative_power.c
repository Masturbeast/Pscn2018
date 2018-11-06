/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 22:21:27 by atep              #+#    #+#             */
/*   Updated: 2018/08/09 17:38:50 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int a;

	a = nb;
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 2;
	while (i <= power)
	{
		a = a * nb;
		i++;
	}
	return (a);
}
