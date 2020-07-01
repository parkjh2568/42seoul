/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:11:07 by junhypar          #+#    #+#             */
/*   Updated: 2020/07/01 11:43:49 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
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
