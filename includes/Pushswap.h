/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 08:52:23 by jperras           #+#    #+#             */
/*   Updated: 2022/03/18 09:45:26 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include "ft_printf.h"
# include "libft.h"

typedef struct s_list
{
	long long		nbr;
	int				index;
	struct s_list	*next;
}	t_list;
/* 
 * ft_pushswap_utils
*/
void	ft_add_front(t_list **list, t_list *new);
void	ft_add_back(t_list **list, t_list *new);
void	printf_list(t_list *list);
t_list	*add_link(int a);
void	ft_inilist(t_list **list, int nbr, int *len);
/* 
 * ft_pushswap_utils1
*/
void	ft_init(int argc, char **argv, int *flag, t_list **list);
void	ft_initchar(char *argv, int *flag, int *len, t_list **list);
void	ft_checkdupli(t_list **list, int *flag);
void	ft_freemalloc(t_list **list);
/* 
 * ft_pushswap_utils2
*/
void	ft_swap(t_list **list);
void	ft_2swap(t_list **list, t_list **list2);
void	ft_push12(t_list **list, t_list **list2);
/* 
 * ft_pushswap_utils3
*/
void	ft_rotate(t_list **list);
void	ft_2rotate(t_list **list, t_list **list2);
void	ft_rrotate(t_list **list);
void	ft_2rrotate(t_list **list, t_list **list2);
/* 
 * ft_pushalgo.c
*/
int		ft_seekmin(t_list **list);
void	ft_reverse(t_list **list, int len);
void	ft_algo(t_list **list, t_list **list2, int len);
/* 
 * ft_check.c
*/
void	ft_checkintchar(char *argv, int *flag);
void	ft_checkint(int argc, char **argv, int *flag);
void	ft_checkformatchar(char *argv, int *flag);
void	ft_checkformatint(char **argv, int *flag, int argc);
/* 
 * ft_algo2.c 
 * For array of len 3 and 2
*/
void	ft_algomini(t_list **list);
void	ft_algo2(t_list **list);
int		ft_seekmax(t_list **list);
/* 
 * ft_algo2.c 
 * For array of len 4, 5, 6, is sorted 
*/
void	ft_algofour(t_list **list, t_list **list2, int len);
void	ft_algofive(t_list **list, t_list **list2, int len);
void	ft_algosix(t_list **list, t_list **list2, int len);
void	ft_aissorted(t_list **list, int *flag);
/* 
 * ft_algo4.c 
 * Put index 
*/
void	ft_index(t_list **list, int nbr, int index);
void	ft_indexlist(t_list **list);
int		ft_check_bit_i(int num, int i);
int		ft_get_bits(int max_num);
void	ft_bits_to_b(t_list **list, t_list **list2, int bits, int len);
/* 
 * ft_radix.c
 * Put index
*/
void	ft_radix_sort(t_list **list, t_list **list2, int len);
#endif
