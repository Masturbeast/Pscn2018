/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:37:37 by atep              #+#    #+#             */
/*   Updated: 2018/08/09 18:10:48 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int a;

	if (nb < 2 || nb > 2147483647)
		return (0);
	if (nb == 2)
		return (1);
	a = 2;
	while (nb % a != 0)
	{
		a++;
		if (nb % a == 0)
		{
			if (a != nb)
				return (0);
			else
				a++;
		}
		if (a > nb)
			return (1);
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
