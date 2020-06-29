/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:14:11 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:50:36 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *src, int c, unsigned int n)
{
	const char		*s;

	s = (const char *)src;
	while (n--)
	{
		if (*s++ == c)
			return ((void *)(s - 1));
	}
	return (0);
}
