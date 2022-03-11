/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 08:26:04 by jperras           #+#    #+#             */
/*   Updated: 2022/03/11 09:31:39 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	sa(int *a)
{
	int	c;

	c = *a;
	*a = *(a + 1);
	*(a + 1) = c;
}

void	sb(int *b)
{
	int	c;

	c = *b;
	*b = *(b + 1);
	*(b + 1) = c;
}

void	ss(void (*f)(int *), int *a, int *b)
{
	f(a);
	f(b);
}
/*


#include <stdio.h>
int	main(void)
{

	int	a[]={1,2,3,4,5,6,7};
	int b[]={2,1,3,4,5,6,7};
	int	i;
	i = 0;
	ss(&sa,a,b);
	while(i<7)
	{
		printf("%d ",a[i]);
		printf(" %d\n",b[i]);
		i++;
	}
}*/
