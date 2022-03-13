/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 08:52:23 by jperras           #+#    #+#             */
/*   Updated: 2022/03/13 14:29:58 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf.h"

typedef struct s_list
{
	int				nbr;
	struct s_list	*next;
}	t_list;

/* 
 * ft_pushswap_utils
*/
void	ft_add_front(t_list **list, t_list *new);
void	ft_add_back(t_list **list, t_list *new);
void	printf_list(t_list *list);
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

#endif
