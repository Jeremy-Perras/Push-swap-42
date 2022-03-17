/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:45:42 by jperras           #+#    #+#             */
/*   Updated: 2022/03/17 16:04:38 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"
void	ft_index(t_list **list, int nbr, int index)
{
	t_list	tmp;

	tmp = *list;
	while (tmp->nbr != nbr)
	   tmp = tmp->next;
	tmp->index = index;	
}

void	ft_indexlist(t_list **list, int len)
{
	t_list	*tmp;
	int		nbr;
	int		i;
	int		min;
	int		j;
	
	tmp = *list;
	nbr = tmp->nbr;
	i = 0;
	min = 0;
	j = 0;
	while (i < len)
	{	
		while (tmp)
		{
			if (tmp->nbr < nbr)
			{
				nbr = tmp->nbr;
				min= j;
			}
			j++;
			tmp = tmp->next;
		}
		ft_index(list, nbr, index);
		i++;
	}
}
