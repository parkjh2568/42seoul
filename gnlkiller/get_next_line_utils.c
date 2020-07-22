/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 11:00:27 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/22 17:15:26 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t			ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t a;
	size_t b;

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

int				ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char			*ft_strdup(char *src)
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

char			*ft_sj(char *s1, char *s2, int len1, int len2)
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			out[i] = s1[i];
		else
			out[i] = s2[i - len1];
		i++;
	}
	out[i] = 0;
	return (out);
}

char			*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*outt;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
	{
		if (!s1)
			outt = ft_strdup(s2);
		else
			outt = ft_strdup(s1);
		return (outt);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	outt = ft_sj(s1, s2, len1, len2);
	free(s1);
	return (outt);
}
