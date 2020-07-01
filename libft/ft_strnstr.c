/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 14:37:09 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 11:01:43 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	check_len(const char *big, size_t *len)
{
	int	biglen;

	biglen = ft_len(big);
	if (*len > biglen)
		*len = (size_t)biglen;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (ft_len(little) <= 0)
		return (0);
	check_len(big, &len);
	while (i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j < ft_len(little) && big[i + j] != 0)
			{
				if (big[i + j] == little[j])
					j++;
				else
					break ;
			}
			if (j == ft_len(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
