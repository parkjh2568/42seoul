/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 10:07:57 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 10:52:59 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			str_len(char *c)
{
	size_t len;

	len = 0;
	while (c[len])
	{
		len++;
	}
	return (len);
}

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t i;
	size_t ret;

	ret = 0;
	dest_len = str_len(dest);
	src_len = str_len(src);
	if (size <= dest_len)
		ret = src_len + size;
	else
	{
		ret = src_len + dest_len;
		i = 0;
		while (i < (size - dest_len) - 1 && src[i])
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (ret);
}
