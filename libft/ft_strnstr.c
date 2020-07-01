/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:37:09 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 10:16:26 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		biglen;
	int		littlelen;
	int		i;
	int		j;

	i = 0;
	biglen = ft_len(big);
	littlelen = ft_len(little);
	if (littlelen <= 0)
		return (0);
	if (len > biglen)
		len = (size_t)biglen;
	while (i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j < littlelen && big[i + j] != 0)
			{
				if (big[i + j] == little[j])
					j++;
				else
					break;
			}
			if (j == littlelen)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
