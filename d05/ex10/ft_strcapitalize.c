/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:01:17 by atep              #+#    #+#             */
/*   Updated: 2018/08/16 12:30:23 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_alllowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void	ft_checkfirstchar(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_alllowercase(str);
	ft_checkfirstchar(str);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				i++;
			i++;
		}
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
