/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 08:11:42 by adejbakh          #+#    #+#             */
/*   Updated: 2018/08/05 12:56:24 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

void	ft_body(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	ft_foot(int x)
{
	int i;

	i = 1;
	ft_putchar('C');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		ft_putstr("invalid number\n");
		return (0);
	}
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
	ft_body(x, y);
	if (y > 1)
		ft_foot(x);
	return (1);
}
