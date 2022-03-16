/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:27:56 by jperras           #+#    #+#             */
/*   Updated: 2022/03/16 13:53:27 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

void	ft_checkintchar(char *argv, int *flag)
{
	long long	j;
	int			i;
	int			min;

	i = 0;
	j = 0;
	min = 1;
	while (argv[i] && *flag == 0)
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			j = argv[i] - '0' + j * 10;
		else if (argv[i] == '-')
			min = -1;
		if ((min * j) > 2147483647 || (min * j) < -2147483648)
			*flag = 1;
		if (argv[i] == 32)
		{
			j = 0;
			min = 1;
		}
		i++;
	}
}

void	ft_inittab(long long *i)
{
	i[0] = 1;
	i[1] = 0;
	i[2] = 0;
	i[3] = 1;
	i[4] = 0;
}

void	ft_checkint(int argc, char **argv, int *flag)
{
	long long	i[5];

	ft_inittab(i);
	while (i[0] < argc && *flag == 0)
	{
		while (argv[i[0]][i[4]] && *flag == 0)
		{
			if (argv[i[0]][i[4]] >= '0' && argv[i[0]][i[4]] <= '9')
				i[2] = argv[i[0]][i[4]] - '0' + i[2] * 10;
			else if (argv[i[0]][i[4]] == '-')
				i[3] = -1;
			if ((i[3] * i[2]) > 2147483647 || (i[3] * i[2]) < -2147483648)
				*flag = 1;
			i[4] = i[4] + 1;
		}
		i[2] = 0;
		i[4] = 0;
		i[3] = 1;
		i[0] = i[0] + 1;
	}
}

void	ft_checkformatchar(char *argv, int *flag)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9') && argv[i] != 32
			&& argv[i] != '-')
			*flag = 1;
		if (argv[i] == 32 && (!(argv[i + 1] <= '9' && argv[i + 1] >= '0')
				&& argv[i + 1] != '-'))
			*flag = 1;
		i++;
	}
}

void	ft_checkformatint(char **argv, int *flag, int argc)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		while (argv[i][k])
		{
			if (!(argv[i][k] >= '0' && argv[i][k] <= '9') && argv[i][k] != '-')
				*flag = 1;
			if ((argv[i][k] >= '0' && argv[i][k] <= '9')
					&& argv[i][k + 1] == '-')
				*flag = 1;
			if (!(argv[i][k + 1] >= '0' && argv[i][k + 1] <= '9')
					&& argv[i][k] == '-')
				*flag = 1;
			k++;
		}
		k = 0;
		i++;
	}
}
