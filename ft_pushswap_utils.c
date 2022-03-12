/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:13:28 by jperras           #+#    #+#             */
/*   Updated: 2022/03/12 17:39:59 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

void	ft_add_begining(t_list **list, t_list *new)
{
	if(list && new)
		new->next = *list;
	else
		*list = new;
}

void ft_add_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	tmp = *list;
	if (list && new)
	{
		if (*list)
		{
			while(tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
		}
		else
			*list = new;
	}
}

t_list	*ft_swap(t_list *list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = list;
	tmp = list;
	list = list->next;
	tmp2 = list;
	list = list->next;
	ft_add_begining(&list, tmp);
	ft_add_begining(&tmp, tmp2);
	return (tmp2);
}


