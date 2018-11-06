/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:49:40 by atep              #+#    #+#             */
/*   Updated: 2018/08/13 19:55:55 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		taille++;
	j = 0;
	if (src[j] == '\0')
		return (dest);
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	if (i > size)
		return (
	return (dest);
}
