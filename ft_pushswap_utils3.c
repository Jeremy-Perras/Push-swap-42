/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:55:47 by jperras           #+#    #+#             */
/*   Updated: 2022/03/13 14:31:55 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

void	ft_rotate(t_list **list)
{
	t_list	*tmp;

	if (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		tmp->next = NULL;
		ft_add_back(list, tmp);
	}
}

void	ft_2rotate(t_list **list, t_list **list2)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		tmp->next = NULL;
		ft_add_back(list, tmp);
	}
	if (*list2)
	{
		tmp2 = *list2;
		*list2 = (*list2)->next;
		tmp2 = NULL;
		ft_add_back(list2, tmp2);
	}
}

void	ft_rrotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = *list;
	if (*list)
	{
		while ((*list)->next->next)
			*list = (*list)->next;
		tmp = (*list)->next;
		(*list)->next = NULL;
		ft_add_front(&tmp2, tmp);
		*list = tmp2;
	}
}

void	ft_2rrotate(t_list **list, t_list **list2)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = *list;
	if (*list)
	{
		while ((*list)->next->next)
			*list = (*list)->next;
		tmp = (*list)->next;
		(*list)->next = NULL;
		ft_add_front(&tmp2, tmp);
		*list = tmp2;
	}
	tmp2 = *list2;
	if (*list2)
	{
		while ((*list2)->next->next)
			*list2 = (*list2)->next;
		tmp = (*list2)->next;
		(*list2)->next = NULL;
		ft_add_front(&tmp2, tmp);
		*list2 = tmp2;
	}
}
