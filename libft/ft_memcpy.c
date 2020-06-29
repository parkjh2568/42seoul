/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:21:00 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:54:43 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		d[n] = s[n];
	return (dst);
}
