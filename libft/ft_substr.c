/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:22:59 by junhypar          #+#    #+#             */
/*   Updated: 2021/04/01 16:55:24 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			slen;
	char			*out;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen((char *)s);
	if (slen < start || len <= 0 || slen == 0)
		return (ft_strdup(""));
	if (slen >= start + len)
	{
		out = malloc(sizeof(char) * (len + 1));
		if (!out)
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
		return (ft_strdup(""));
}
