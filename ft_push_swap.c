/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:36:09 by jperras           #+#    #+#             */
/*   Updated: 2022/03/14 16:26:07 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"
/*
void	ft_push_swap(void)
{
	//t_list	*b;
	;


}

*/

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		len;
	int		flag;

	len = 0;
	a = NULL;
	b = NULL;
	flag = 0;
	if (argc == 2)
		ft_initchar(argv[argc - 1], &flag, &len, &a);
	else if (argc > 2)
	{
		ft_init(argc, argv, &flag, &a);
		len = argc - 1;
	}
	else
		return (0);
	ft_checkdupli(&a, &flag);
	ft_checkint(&a, &flag);
	ft_algo(&a, &b, len);
	if (flag == 1)
		ft_printf("%s\n", "Error");
	else
	{
		printf_list(a);
		ft_printf("%d\n", len);
	}
}
