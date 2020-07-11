/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:14:11 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/11 14:51:03 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char		*s;

	s = (unsigned char *)src;
	while (n--)
	{
		if (*s++ == (unsigned char)c)
			return ((void *)(s - 1));
	}
	return (0);
}
