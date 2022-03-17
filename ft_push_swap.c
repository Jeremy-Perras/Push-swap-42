/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:36:09 by jperras           #+#    #+#             */
/*   Updated: 2022/03/17 09:50:26 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_initialisation(int argc, char **argv, int *flag)
{
	if (argc == 2)
	{
		ft_checkintchar(argv[argc - 1], flag);
		ft_checkformatchar(argv[argc - 1], flag);
	}
	else if (argc > 2)
	{
		ft_checkformatint(argv, flag, argc);
		ft_checkint(argc, argv, flag);
	}
	if (*flag == 1)
		write(2, "Error\n", 6);
}

void	ft_initdupli(t_list **list, int *flag)
{
	ft_checkdupli(list, flag);
	if (*flag == 1)
	{
		write(2, "Error\n", 6);
		ft_freemalloc(list);
	}
}

void	ft_choose(t_list **list, int len, t_list **list2)
{
	if (len == 2)
		ft_algo2(list);
	else if (len == 3)
		ft_algomini(list);
	else if (len == 4)
		ft_algofour(list, list2, len);
	else if (len == 5)
		ft_algofive(list, list2, len);
	else if (len == 6)
		ft_algosix(list, list2, len);
	else if (len >= 7)
		ft_algo(list, list2, len);
}

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
	ft_initialisation(argc, argv, &flag);
	if (argc == 2 && flag != 1)
		ft_initchar(argv[argc - 1], &flag, &len, &a);
	else if (argc > 2 && flag != 1)
	{
		ft_init(argc, argv, &flag, &a);
		len = argc - 1;
	}
	else
		return (0);
	ft_initdupli(&a, &flag);
	if (flag == 1)
		return (0);
	ft_aissorted(&a, &flag);
	if (flag == 2)
		ft_choose(&a, len, &b);
}
