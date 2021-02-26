/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:03:51 by junhypar          #+#    #+#             */
/*   Updated: 2020/12/26 18:05:29 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*out;
	int		len1;
	int		len2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
		return (!s1 ? ft_strdup(s2) : ft_strdup(s1));
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(out = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	ft_strlcpy(out, s1, len1 + 1);
	while (i < len1)
	{
		s1[i] = 0;
		i++;
	}
	free(s1);
	ft_strlcpy(out + len1, s2, len2 + 1);
	return (out);
}
