/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:50:32 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 15:48:25 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fttlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		no_num(const char *str, int *mine)
{
	int i;

	i = 0;
	while (i < fttlen(str))
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
	int		len;
	int		i;
	int		out;
	int		mine;

	i = 0;
	mine = 0;
	out = 0;
	len = fttlen(str);
	i = no_num(str, &mine);
	while (i < len)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		out = out * 10;
		out = out - (str[i] - '0');
		i++;
	}
	if (mine == 1)
		return (out);
	else
		return (out * (-1));
}
