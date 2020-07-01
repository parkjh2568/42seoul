/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:11:24 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 13:36:43 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_cot(int n)
{
	int cot;

	cot = 0;
	while (n != 0)
	{
		cot++;
		n = n / 10;
	}
	return (cot);
}

void	put_in(char *out, int n, int count, int mine)
{
	int i;
	int n2;

	i = 0;
	while (i <= (count - 1) && n > 0)
	{
		out[count - i - 1] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	out[count] = 0;
	if (mine == 1)
		out[0] = '-';
}

char	*ft_itoa(int n)
{
	int		count;
	int		mine;
	char	*out;

	mine = 0;
	count = 0;
	if (n < 0)
	{
		mine = 1;
		count++;
		n = n * (-1);
	}
	count = count + ft_cot(n);
	if (!(out = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	put_in(out, n, count, mine);
	return (out);
}
