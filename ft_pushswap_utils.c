/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:13:28 by jperras           #+#    #+#             */
/*   Updated: 2022/03/13 15:39:45 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

void	ft_add_front(t_list **list, t_list *new)
{
	if (list && new)
		new->next = *list;
	*list = new;
}

void	ft_add_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	tmp = *list;
	if (list && new)
	{
		if (*list)
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
		}
		else
			*list = new;
	}
}

void	printf_list(t_list *list)
{
	while (list)
	{
		ft_printf("%d\n", list->nbr);
		list = list->next;
	}
}
