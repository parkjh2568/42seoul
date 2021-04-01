/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 11:02:12 by junhypar          #+#    #+#             */
/*   Updated: 2020/11/06 10:53:09 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t a;
	size_t b;

	if (!dest || !src)
		return (0);
	a = 0;
	b = 0;
	if (size != 0)
	{
		while (src[a] && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	while (src[b])
	{
		b++;
	}
	return (b);
}
