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
#include "Pushswap.h"
int	ft_seekmin(t_list **list)
{
	int	i;
	int	j;
	int	min;
	t_list	*tmp;

	i = 0;
	min = 0;
	tmp = *list; 
	j = tmp->nbr;
	while (tmp)
	{
		if (tmp->nbr < j)
		{
			j = tmp->nbr;
			min = i;	

		}
		tmp = tmp->next;	
		i++;
	}
	return (min);
}

void	ft_reverse(t_list **list, int len)
{
	int	min;
	int	j;

	min = ft_seekmin(list);
	j = 0;
	if (min <= len / 2)
	{
		while (j != min)
		{
			ft_rotate(list);
			j++;
		}
	}
	else
	{
		while(j != len - min)
		{
			ft_rrotate(list);
			j++;
		}
	}
}

void	ft_algo(t_list **list, t_list **list2, int len)
{

	while (*list)
	{
		ft_reverse(list, len);
		ft_push12(list, list2);
		*list = (*list)->next;
	}

	while (*list2)
	{
		ft_push12(list2,list);
		*list2 = (*list2)->next;
	}
}













