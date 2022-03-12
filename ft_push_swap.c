/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:36:09 by jperras           #+#    #+#             */
/*   Updated: 2022/03/12 17:39:37 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"
#include <stdio.h>

t_list	*add_link(t_list *list, int a)
{
	t_list	*tmp;
	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->nbr  = a;
		tmp->next = list;
	}
	return(tmp);
}

void printf_list(t_list *list)
{
	while(list)
	{
		printf("%d\n",list->nbr);
		list = list->next;
	}
}
#include <stdio.h>
int	main(void)
{
	t_list *list;
	list = NULL;
	t_list **liste;
	t_list test;
	
	test.next = NULL;
	test.nbr = 18;
	liste = &list;
	list = add_link(*liste, -30);
	list = add_link(*liste, -20);
	list = add_link(*liste, -10);
	list = add_link(*liste, 0);
	list = add_link(*liste, 10);
	//ft_add_back(liste,&test); 
	
	list = ft_swap(list);
	
	printf_list(list);
	
}
