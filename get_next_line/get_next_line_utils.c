/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:00:27 by junhypar          #+#    #+#             */
/*   Updated: 2021/04/01 17:00:51 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	a;
	size_t	b;

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

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		b;

	b = 0;
	while (src[b])
		b++;
	a = (char *)malloc(sizeof(char) * (b + 1));
	if (!a)
		return (NULL);
	b = 0;
	while (src[b])
	{
		a[b] = src[b];
		b++;
	}
	a[b] = 0;
	return (a);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*out;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	out = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, len1 + 1);
	free(s1);
	ft_strlcpy(out + len1, s2, len2 + 1);
	return (out);
}
