/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:22:59 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 10:45:02 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		slen;
	char	*out;
	size_t	i;

	i = 0;
	slen = ft_strlen((char *)s);
	if (slen >= start + len)
	{
		if (!(out = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (i < len)
		{
			out[i] = s[i + start];
			i++;
		}
		out[i] = 0;
		return (out);
	}
	else
		return (NULL);
}
