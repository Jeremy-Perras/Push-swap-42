/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 08:52:23 by jperras           #+#    #+#             */
/*   Updated: 2022/03/12 17:34:40 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
	int	nbr;
	struct s_list *next;

}	t_list;

/* 
 * ft_pushswap_utils
*/
void	ft_add_begining(t_list **list, t_list *new);
void	ft_add_back(t_list **list, t_list *new);
void	ft_swap(t_list *list);
void	printf_list(t_list *list);


#endif
