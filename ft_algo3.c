/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:55:01 by jperras           #+#    #+#             */
/*   Updated: 2022/03/17 09:38:19 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_algofour(t_list **list, t_list **list2, int len)
{
	int	i;

	i = 0;
	while (i < 1)
	{
		ft_reverse(list, len);
		len = len - 1;
		i++;
		ft_push12(list, list2);
		ft_printf("pb\n");
	}
	ft_algomini(list);
	while (*list2)
	{
		ft_push12(list2, list);
		ft_printf("pa\n");
	}
}

void	ft_algofive(t_list **list, t_list **list2, int len)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		ft_reverse(list, len);
		len = len - 1;
		i++;
		ft_push12(list, list2);
		ft_printf("pb\n");
	}
	ft_algomini(list);
	while (*list2)
	{
		ft_push12(list2, list);
		ft_printf("pa\n");
	}
}

void	ft_algosix(t_list **list, t_list **list2, int len)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		ft_reverse(list, len);
		len = len - 1;
		i++;
		ft_push12(list, list2);
		ft_printf("pb\n");
	}
	ft_algomini(list);
	while (*list2)
	{
		ft_push12(list2, list);
		ft_printf("pa\n");
	}
}

void	ft_aissorted(t_list **list, int *flag)
{
	int		nbr;
	t_list	*tmp;

	tmp = *list;
	nbr = tmp->nbr;
	while (tmp && *flag != 2)
	{
		if (tmp->nbr < nbr)
			*flag = 2;
		nbr = tmp->nbr;
		tmp = tmp->next;
	}
}
