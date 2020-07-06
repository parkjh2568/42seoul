/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:11:07 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/06 16:03:53 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		all_same(char const *s1, char const *set)
{
	int	count;
	int	j;
	int k;

	j = 0;
	count = 0;
	while (s1[j])
	{
		k = 0;
		while (set[k])
		{
			if (s1[j] == set[k])
				count++;
			k++;
		}
		if (count == 0)
			return (0);
		count = 0;
		j++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*out;

	i = all_same(s1, set);
	if (i != 0)
		return ("");
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen((char *)s1);
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	if (!(out = malloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	ft_strlcpy(out, (char *)&s1[i], (j - i + 1));
	return (out);
}
