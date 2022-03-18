/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:45:42 by jperras           #+#    #+#             */
/*   Updated: 2022/03/18 09:44:43 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_index(t_list **list, int nbr, int index)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp->nbr != nbr)
		tmp = tmp->next;
	tmp->index = index;
}

void	ft_indexlist(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		nbr;
	int		j;

	tmp = *list;
	nbr = tmp->nbr;
	j = 0;
	while (tmp)
	{	
		nbr = tmp->nbr;
		tmp2 = *list;
		while (tmp2)
		{
			if (tmp2->nbr < nbr)
				j++;
			tmp2 = tmp2->next;
		}
		ft_index(list, nbr, j);
		j = 0;
		tmp = tmp->next;
	}
}

int	ft_check_bit_i(int num, int i)
{
	return ((num >> i) & 1);
}

int	ft_get_bits(int max_num)
{
	int	i;

	i = 31;
	while (ft_check_bit_i(max_num, i) != 1)
		i--;
	return (i);
}

void	ft_bits_to_b(t_list **list, t_list **list2, int bits, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ft_check_bit_i((*list)->index, bits) == 0)
		{
			ft_push12(list, list2);
			ft_printf("pb\n");
		}
		else
		{
			ft_rotate(list);
			ft_printf("ra\n");
		}
		i++;
	}
}
