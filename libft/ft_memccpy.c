/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:39:43 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:54:14 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while(i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return(&dest[++i]);
		i++;
	}
	return (0);
}
