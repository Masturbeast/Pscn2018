#ifndef __FT_FT_H__
#define __FT_FT_H__
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
char	*ft_strdupcat(char *str, char buf);
char	**ft_tab_c_00(int x, int y);
char	**ft_tab_c_01(int x, int y);
char	**ft_tab_c_02(int x, int y);
char	**ft_tab_c_03(int x, int y);
char	**ft_tab_c_04(int x, int y);
char	**ft_split_whitespaces(char *str);
char	**ft_tab_to_cmp(int *line, int *col, char *tab);
void	ft_write_result(int x, int y, char **tabmain);
int		ft_strlen(char *str);
int 	ft_tab_comp(char **tab1, char **tab2, int stat);
int		ft_1st_check(char c);
int		ft_line(int x, char *carac, int i, char **tab);
#endif
