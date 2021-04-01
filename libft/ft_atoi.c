/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:50:32 by junhypar          #+#    #+#             */
/*   Updated: 2021/02/26 15:13:24 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		no_num(const char *str, int *mine)
{
	int i;

	i = 0;
	while (i < ft_strlen((char *)str))
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
			i++;
		else
			break ;
	}
	if (str[i] != '+' && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
		return (0);
	if (str[i] == '-')
	{
		*mine = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
	int		i;
	long	out;
	int		mine;

	i = 0;
	mine = 0;
	out = 0;
	i = no_num(str, &mine);
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		out = out * 10;
		out = out - (str[i++] - '0');
		if (out > 2147483647)
		{
			if (out > 2147483648 && mine == 1)
				return (0);
			else if (mine == 0)
				return (-1);
		}
	}
	if (mine == 1)
		return (out);
	else
		return (out * (-1));
}
