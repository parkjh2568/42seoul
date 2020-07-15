/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:03:51 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/11 14:34:40 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		len1;
	int		len2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
		return (!s1 ? ft_strdup((char *)s2) : ft_strdup((char *)s1));
	i = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if (!(out = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			out[i] = s1[i];
		else
			out[i] = s2[i - len1];
		i++;
	}
	out[i] = 0;
	return (out);
}
