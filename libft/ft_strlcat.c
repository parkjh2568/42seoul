/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 10:07:57 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 16:55:12 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					str_len(char *c)
{
	unsigned int len;

	len = 0;
	while (c[len])
	{
		len++;
	}
	return (len);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;
	unsigned int ret;

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
