/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:29:39 by atep              #+#    #+#             */
/*   Updated: 2018/08/20 12:02:58 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int n;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			n = 0;
			while (argv[i][n] != '\0')
			{
				ft_putchar(argv[i][n]);
				n++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
