/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:36:28 by atep              #+#    #+#             */
/*   Updated: 2018/08/09 17:37:05 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int a;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	a = nb * ft_recursive_factorial(nb - 1);
	return (a);
}
