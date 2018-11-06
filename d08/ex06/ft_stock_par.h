/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:55:51 by atep              #+#    #+#             */
/*   Updated: 2018/08/23 22:19:40 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);
void				ft_print_words_tables(char **tab);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_putchar(char nb);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);

#endif
