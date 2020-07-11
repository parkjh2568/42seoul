/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:48:49 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/11 14:41:03 by junhypar         ###   ########.fr       */
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
	while (s[k])
		k++;
	if (k == 0)
		return (0);
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

void	free_all(char **out, int j)
{
	int		jj;

	jj = 0;
	while (jj < j)
	{
		free(out[jj]);
		jj++;
	}
	free(out);
}

int		mk_split(char c, char const *s, char **out)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == 0))
		{
			if (!(out[j] = ft_word(i, s, c)))
			{
				free_all(out, j);
				return (-22);
			}
			j++;
		}
		i++;
	}
	out[j] = NULL;
	return (22);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		numb;
	char	**out;

	if (!s)
		return (NULL);
	numb = count_numb(s, c);
	i = 0;
	j = 0;
	out = (char **)malloc(sizeof(char *) * (numb + 1));
	if (out == NULL)
		return (NULL);
	if (numb == 0)
	{
		out[0] = 0;
		return (out);
	}
	if (mk_split(c, s, out) > 0)
		return (out);
	else
		return (NULL);
}
