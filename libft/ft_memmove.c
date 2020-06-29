/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:57:42 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:51:06 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;

	if (dest <= src)
	{
		d = (char *)dest;
		s = (const char *)src;
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d = (char *)dest;
		s = (const char *)src;
		d = d + n;
		s = s + n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
