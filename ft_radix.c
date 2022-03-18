/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:40:29 by jperras           #+#    #+#             */
/*   Updated: 2022/03/18 09:41:16 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_radix_sort(t_list **list, t_list **list2, int len)
{
	int	i;
	int	num_of_bits;

	i = 0;
	num_of_bits = ft_get_bits(len - 1);
	while (i <= num_of_bits)
	{
		ft_bits_to_b(list, list2, i, len);
		while (*list2)
		{
			ft_push12(list2, list);
			ft_printf("pa\n");
		}
		i++;
	}
}
