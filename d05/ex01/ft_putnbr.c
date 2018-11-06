/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 01:56:08 by atep              #+#    #+#             */
/*   Updated: 2018/08/15 19:12:33 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char nb);

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		a = -a;
		ft_putchar('-');
	}
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar(a % 10 + 48);
}
