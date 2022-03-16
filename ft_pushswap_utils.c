/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:13:28 by jperras           #+#    #+#             */
/*   Updated: 2022/03/16 10:24:14 by jperras          ###   ########.fr       */
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

t_list	*add_link(int nbr)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->nbr = nbr;
		tmp->next = NULL;
	}
	return (tmp);
}

void	ft_inilist(t_list **list, int nbr, int *len)
{
	*len = *len + 1;
	ft_add_back(list, add_link(nbr));
}
