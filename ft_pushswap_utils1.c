/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:19:29 by jperras           #+#    #+#             */
/*   Updated: 2022/03/17 09:50:06 by jperras          ###   ########.fr       */
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

void	ft_inittab2(int *tab)
{
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 1;
}

void	ft_initchar(char *argv, int *flag, int *len, t_list **list)
{
	int	i[3];

	ft_inittab2(i);
	while (argv[i[0]] && *flag == 0)
	{
		if (argv[i[0]] >= '0' && argv[i[0]] <= '9')
			i[1] = argv[i[0]] - '0' + i[1] * 10;
		else if (argv[i[0]] == '-')
			i[2] = -1;
		else if (argv[i[0]] == 32 && argv[i[0] + 1] != '\0')
		{
			ft_inilist(list, i[2] * i[1], len);
			i[1] = 0;
			i[2] = 1;
		}
		else if (argv[i[0] + 1] == '\0')
			;
		else
			*flag = 1;
		i[0] = i[0] + 1;
	}
	ft_inilist(list, i[2] * i[1], len);
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
