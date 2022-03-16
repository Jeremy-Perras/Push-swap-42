/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:32:35 by jperras           #+#    #+#             */
/*   Updated: 2022/03/16 17:21:17 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

int	ft_seekmax(t_list **list)
{
	int		max;
	t_list	*tmp;
	int		i;
	int		j;

	tmp = *list;
	max = tmp->nbr;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (max < tmp->nbr)
		{
			max = tmp->nbr;
			j = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

void	ft_algomini2(t_list **list, int j)
{
	if (j == 1 && (*list)->next->next->nbr > (*list)->nbr)
	{
		ft_rrotate(list);
		ft_swap(list);
		ft_printf("rra\n");
		ft_printf("sa\n");
	}
	else if (j == 1)
	{
		ft_rrotate(list);
		ft_printf("rra\n");
	}
}

void	ft_algomini(t_list **list)
{
	int	j;

	j = ft_seekmax(list);
	if (j == 0 && (*list)->next->nbr > (*list)->next->next->nbr)
	{
		ft_swap(list);
		ft_rrotate(list);
		ft_printf("sa\nrra\n");
	}
	else if (j == 0)
	{
		ft_rrotate(list);
		ft_rrotate(list);
		ft_printf("rra\n");
		ft_printf("rra\n");
	}
	else if (j == 2 && (*list)->nbr > (*list)->next->nbr)
	{
		ft_swap(list);
		ft_printf("sa\n");
	}
	else
		ft_algomini2(list, j);
}

void	ft_algo2(t_list **list)
{
	if ((*list)->next->nbr < (*list)->nbr)
	{
		ft_swap(list);
		ft_printf("sa\n");
	}
}
