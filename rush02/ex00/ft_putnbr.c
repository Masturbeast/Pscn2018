/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:06:29 by mdavid            #+#    #+#             */
/*   Updated: 2018/08/19 19:24:30 by mdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void	ft_putnbr(int nb)
{
	unsigned int	un_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		un_nb = -nb;
	}
	else
		un_nb = nb;
	if (un_nb > 9)
	{
		ft_putnbr(un_nb / 10);
	}
	ft_putchar((un_nb % 10) + 48);
}
