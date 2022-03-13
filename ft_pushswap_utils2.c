/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:20:44 by jperras           #+#    #+#             */
/*   Updated: 2022/03/13 14:31:15 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_swap(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	*list = (*list)->next;
	tmp2 = *list;
	*list = (*list)->next;
	ft_add_front(&*list, tmp);
	ft_add_front(&tmp, tmp2);
	*list = tmp2;
}

void	ft_2swap( t_list **list, t_list **list2)
{
	ft_swap(list);
	ft_swap(list2);
}

void	ft_push12(t_list **list, t_list **list2)
{
	t_list	*tmp;

	if (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		ft_add_front(list2, tmp);
	}
}
