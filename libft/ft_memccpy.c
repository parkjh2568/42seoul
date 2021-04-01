/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:39:43 by junhypar          #+#    #+#             */
/*   Updated: 2020/10/31 21:16:05 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;
	unsigned char	cc;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == cc)
		{
			i++;
			return (&dest[i]);
		}
		i++;
	}
	return (0);
}
