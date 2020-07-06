/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:48:49 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 16:40:07 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_word(int i, char const *s, char c)
{
	int		l;
	int		cc;
	char	*wod;

	if (s[i + 1] == 0 && s[i] != c)
		i = i + 1;
	l = i - 1;
	cc = 0;
	while (s[l] != c && l >= 0)
	{
		cc++;
		l--;
	}
	if (!(wod = (char *)malloc(sizeof(char) * (cc + 1))))
		return (NULL);
	l = 0;
	while (l < cc)
	{
		wod[l] = s[i - cc];
		l++;
		i = i + 1;
	}
	wod[l] = 0;
	return (wod);
}

int		count_numb(char const *s, char c)
{
	int k;
	int numb;

	numb = 0;
	k = 0;
	if (s[k] == c)
		k++;
	while (s[k])
	{
		if ((s[k] == c && s[k - 1] != c) || (s[k] != c && s[k + 1] == 0))
			numb++;
		k++;
	}
	return (numb);
}

char	**free_all(char **out, int j)
{
	int		jj;

	jj = 0;
	while (jj < j)
	{
		free(out[jj]);
		jj++;
	}
	free(out);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		numb;
	char	**out;

	numb = count_numb(s, c);
	i = 0;
	j = 0;
	out = (char **)malloc(sizeof(char *) * (numb + 1));
	if (out == NULL)
		return (NULL);
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == 0))
		{
			if (!(out[j] = ft_word(i, s, c)))
				return (free_all(out, j));
			j++;
		}
		i++;
	}
	out[j] = NULL;
	return (out);
}
