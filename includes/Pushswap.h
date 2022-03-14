/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 08:52:23 by jperras           #+#    #+#             */
/*   Updated: 2022/03/14 16:45:44 by jperras          ###   ########.fr       */
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
void	ft_checkint(t_list **list, int *flag);
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
 * ft_pushswap_utils4
*/
#endif