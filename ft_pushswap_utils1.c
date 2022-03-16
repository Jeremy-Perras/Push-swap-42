/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:19:29 by jperras           #+#    #+#             */
/*   Updated: 2022/03/16 13:54:10 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pushswap.h"

void	ft_init(int argc, char **argv, int *flag, t_list **list)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 0;
	while (i < argc && *flag == 0)
	{
		if ((*argv[i] <= '9' && *argv[i] >= '0') || *argv[i] == '-')
			ft_inilist(list, ft_atoi((const char *) argv[i]), &tmp);
		else
			*flag = 1;
		i++;
	}
}

void	ft_initchar(char *argv, int *flag, int *len, t_list **list)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = 1;
	while (argv[i] && *flag == 0)
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			j = argv[i] - '0' + j * 10;
		else if (argv[i] == '-')
			min = -1;
		else if (argv[i] == 32)
		{
			ft_inilist(list, min * j, len);
			j = 0;
			min = 1;
		}
		else
			*flag = 1;
		i++;
	}
	ft_inilist(list, min * j, len);
}

void	ft_checkdupli(t_list **list, int *flag)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	while (tmp && *flag == 0)
	{
		tmp2 = tmp->next;
		while (tmp2 && *flag == 0)
		{
			if (tmp->nbr == tmp2->nbr)
				*flag = 1;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	ft_freemalloc(t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
	free(*list);
}
