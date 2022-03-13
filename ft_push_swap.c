/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:36:09 by jperras           #+#    #+#             */
/*   Updated: 2022/03/13 14:28:17 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

t_list	*add_link(t_list *list, int a)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->nbr = a;
		tmp->next = list;
	}
	return (tmp);
}
/*
int	main(void)
{
	t_list *list;
	list = NULL;
	t_list **liste;
	t_list test;
	t_list	*list2;
	list2 = NULL;	
	test.next = NULL;
	test.nbr = 18;
	liste = &list;
	list = add_link(*liste, -30);
	list = add_link(*liste, -20);
	list = add_link(*liste, -10);
	list = add_link(*liste, 0);
	list = add_link(*liste, 10);
	list = add_link(*liste, 20);
	list2 = add_link(list2, -0);
	list2 = add_link(list2, -20);
	list2 = add_link(list2, -10);
	list2 = add_link(list2, 0);
	list2 = add_link(list2, 10);
	list2 = add_link(list2, 20);

	//ft_add_back(liste,&test); 
	
	//ft_swap(&list);
	//ft_2swap(&list,&list);
	//ft_push12(&list2, &list);
	ft_2rrotate(&list, &list2);
	
	printf_list(list);
	printf("\n");
	printf_list(list2);
	
}*/
