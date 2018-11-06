/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:57:04 by atep              #+#    #+#             */
/*   Updated: 2018/08/20 12:03:48 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int n;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			n = 0;
			while (argv[i][n] != '\0')
			{
				ft_putchar(argv[i][n]);
				n++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
